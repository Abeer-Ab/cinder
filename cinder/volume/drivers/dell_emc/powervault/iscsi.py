#    Copyright 2014 Objectif Libre
#    Copyright 2015 Dot Hill Systems Corp.
#    Copyright 2016-2020 Seagate Technology or one of its affiliates
#
#    Licensed under the Apache License, Version 2.0 (the "License"); you may
#    not use this file except in compliance with the License. You may obtain
#    a copy of the License at
#
#         http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
#    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
#    License for the specific language governing permissions and limitations
#    under the License.
#

from cinder import interface
import cinder.volume.drivers.dell_emc.powervault.common as pvme_common
import cinder.volume.drivers.stx.iscsi as iscsi


@interface.volumedriver
class PVMEISCSIDriver(iscsi.STXISCSIDriver):
    """Cinder iSCSI driver for Dell EMC PowerVault ME-Series arrays.

    .. code-block:: default

      Version history:
          1.0    - Inheriting from Seagate Cinder driver.
    """

    VERSION = "2.0"

    CI_WIKI_NAME = "DellEMC_PowerVault_ME_CI"

    SUPPORTED = True

    def __init__(self, *args, **kwargs):
        super(PVMEISCSIDriver, self).__init__(*args, **kwargs)
        self.configuration.append_config_values(pvme_common.common_opts)
        self.configuration.append_config_values(pvme_common.iscsi_opts)
        self.iscsi_ips = self.configuration.pvme_iscsi_ips

    @staticmethod
    def get_driver_options():
        return (pvme_common.PVMECommon.get_driver_options() +
                pvme_common.iscsi_opts)

    def _init_common(self):
        return pvme_common.PVMECommon(self.configuration)
