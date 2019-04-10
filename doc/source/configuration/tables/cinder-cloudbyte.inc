..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-cloudbyte:

.. list-table:: Description of CloudByte volume driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``cb_account_name`` = ``None``
     - (String) CloudByte storage specific account name. This maps to a project name in OpenStack.
   * - ``cb_add_qosgroup`` = ``{'latency': '15', 'iops': '10', 'graceallowed': 'false', 'iopscontrol': 'true', 'memlimit': '0', 'throughput': '0', 'tpcontrol': 'false', 'networkspeed': '0'}``
     - (Dict) These values will be used for CloudByte storage's addQos API call.
   * - ``cb_apikey`` = ``None``
     - (String) Driver will use this API key to authenticate against the CloudByte storage's management interface.
   * - ``cb_auth_group`` = ``None``
     - (String) This corresponds to the discovery authentication group in CloudByte storage. Chap users are added to this group. Driver uses the first user found for this group. Default value is None.
   * - ``cb_confirm_volume_create_retries`` = ``3``
     - (Integer) Will confirm a successful volume creation in CloudByte storage by making this many number of attempts.
   * - ``cb_confirm_volume_create_retry_interval`` = ``5``
     - (Integer) A retry value in seconds. Will be used by the driver to check if volume creation was successful in CloudByte storage.
   * - ``cb_confirm_volume_delete_retries`` = ``3``
     - (Integer) Will confirm a successful volume deletion in CloudByte storage by making this many number of attempts.
   * - ``cb_confirm_volume_delete_retry_interval`` = ``5``
     - (Integer) A retry value in seconds. Will be used by the driver to check if volume deletion was successful in CloudByte storage.
   * - ``cb_create_volume`` = ``{'compression': 'off', 'deduplication': 'off', 'blocklength': '512B', 'sync': 'always', 'protocoltype': 'ISCSI', 'recordsize': '16k'}``
     - (Dict) These values will be used for CloudByte storage's createVolume API call.
   * - ``cb_tsm_name`` = ``None``
     - (String) This corresponds to the name of Tenant Storage Machine (TSM) in CloudByte storage. A volume will be created in this TSM.
   * - ``cb_update_file_system`` = ``compression, sync, noofcopies, readonly``
     - (List) These values will be used for CloudByte storage's updateFileSystem API call.
   * - ``cb_update_qos_group`` = ``iops, latency, graceallowed``
     - (List) These values will be used for CloudByte storage's updateQosGroup API call.