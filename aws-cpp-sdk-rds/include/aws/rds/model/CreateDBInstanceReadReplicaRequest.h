﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API CreateDBInstanceReadReplicaRequest : public RDSRequest
  {
  public:
    CreateDBInstanceReadReplicaRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstanceReadReplica"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, its backup retention period must be greater than 0.</p> </li>
     * <li> <p>If the source DB instance is in the same AWS Region as the Read Replica,
     * specify a valid DB instance identifier.</p> </li> <li> <p>If the source DB
     * instance is in a different AWS Region than the Read Replica, specify a valid DB
     * instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, its backup retention period must be greater than 0.</p> </li>
     * <li> <p>If the source DB instance is in the same AWS Region as the Read Replica,
     * specify a valid DB instance identifier.</p> </li> <li> <p>If the source DB
     * instance is in a different AWS Region than the Read Replica, specify a valid DB
     * instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, its backup retention period must be greater than 0.</p> </li>
     * <li> <p>If the source DB instance is in the same AWS Region as the Read Replica,
     * specify a valid DB instance identifier.</p> </li> <li> <p>If the source DB
     * instance is in a different AWS Region than the Read Replica, specify a valid DB
     * instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, its backup retention period must be greater than 0.</p> </li>
     * <li> <p>If the source DB instance is in the same AWS Region as the Read Replica,
     * specify a valid DB instance identifier.</p> </li> <li> <p>If the source DB
     * instance is in a different AWS Region than the Read Replica, specify a valid DB
     * instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, its backup retention period must be greater than 0.</p> </li>
     * <li> <p>If the source DB instance is in the same AWS Region as the Read Replica,
     * specify a valid DB instance identifier.</p> </li> <li> <p>If the source DB
     * instance is in a different AWS Region than the Read Replica, specify a valid DB
     * instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, its backup retention period must be greater than 0.</p> </li>
     * <li> <p>If the source DB instance is in the same AWS Region as the Read Replica,
     * specify a valid DB instance identifier.</p> </li> <li> <p>If the source DB
     * instance is in a different AWS Region than the Read Replica, specify a valid DB
     * instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL DB instance only if the
     * source is running PostgreSQL 9.3.5 or later (9.4.7 and higher for cross-region
     * replication).</p> </li> <li> <p>The specified DB instance must have automatic
     * backups enabled, its backup retention period must be greater than 0.</p> </li>
     * <li> <p>If the source DB instance is in the same AWS Region as the Read Replica,
     * specify a valid DB instance identifier.</p> </li> <li> <p>If the source DB
     * instance is in a different AWS Region than the Read Replica, specify a valid DB
     * instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>Default: Inherits from
     * the source DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>Default: Inherits from
     * the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>Default: Inherits from
     * the source DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>Default: Inherits from
     * the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>Default: Inherits from
     * the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>Default: Inherits from
     * the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the Read Replica, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>Default: Inherits from
     * the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica is created in.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica is created in.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica is created in.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica is created in.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica is created in.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica is created in.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica is created in.</p>
     * <p>Default: A random, system-chosen Availability Zone in the endpoint's AWS
     * Region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies whether the read replica is in a Multi-AZ deployment. </p> <p>You
     * can create a Read Replica as a Multi-AZ DB instance. RDS creates a standby of
     * your replica in another Availability Zone for failover support for the replica.
     * Creating your Read Replica as a Multi-AZ DB instance is independent of whether
     * the source database is a Multi-AZ DB instance. </p> <note> <p>Currently
     * PostgreSQL Read Replicas can only be created as single-AZ DB instances.</p>
     * </note>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies whether the read replica is in a Multi-AZ deployment. </p> <p>You
     * can create a Read Replica as a Multi-AZ DB instance. RDS creates a standby of
     * your replica in another Availability Zone for failover support for the replica.
     * Creating your Read Replica as a Multi-AZ DB instance is independent of whether
     * the source database is a Multi-AZ DB instance. </p> <note> <p>Currently
     * PostgreSQL Read Replicas can only be created as single-AZ DB instances.</p>
     * </note>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies whether the read replica is in a Multi-AZ deployment. </p> <p>You
     * can create a Read Replica as a Multi-AZ DB instance. RDS creates a standby of
     * your replica in another Availability Zone for failover support for the replica.
     * Creating your Read Replica as a Multi-AZ DB instance is independent of whether
     * the source database is a Multi-AZ DB instance. </p> <note> <p>Currently
     * PostgreSQL Read Replicas can only be created as single-AZ DB instances.</p>
     * </note>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the Read
     * Replica during the maintenance window.</p> <p>Default: Inherits from the source
     * DB instance</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the Read
     * Replica during the maintenance window.</p> <p>Default: Inherits from the source
     * DB instance</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor engine upgrades are applied automatically to the Read
     * Replica during the maintenance window.</p> <p>Default: Inherits from the source
     * DB instance</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The option group the DB instance is associated with. If omitted, the default
     * option group for the engine specified is used.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the default
     * option group for the engine specified is used.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the default
     * option group for the engine specified is used.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the default
     * option group for the engine specified is used.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The option group the DB instance is associated with. If omitted, the default
     * option group for the engine specified is used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The option group the DB instance is associated with. If omitted, the default
     * option group for the engine specified is used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The option group the DB instance is associated with. If omitted, the default
     * option group for the engine specified is used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b>true</p> </li> <li> <p> <b>VPC:</b>false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance is publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance is
     * private.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b>true</p> </li> <li> <p> <b>VPC:</b>false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance is publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance is
     * private.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b>true</p> </li> <li> <p> <b>VPC:</b>false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance is publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance is
     * private.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateDBInstanceReadReplicaRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBInstanceReadReplicaRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateDBInstanceReadReplicaRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDBInstanceReadReplicaRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance is
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another AWS Region.</p> </li> <li> <p>If
     * supplied, must match the name of an existing DBSubnetGroup.</p> </li> <li>
     * <p>The specified DB subnet group must be in the same AWS Region in which the
     * operation is running.</p> </li> <li> <p>All Read Replicas in one AWS Region that
     * are created from the same source DB instance must either:&gt;</p> <ul> <li>
     * <p>Specify DB subnet groups from the same VPC. All these Read Replicas are
     * created in the same VPC.</p> </li> <li> <p>Not specify a DB subnet group. All
     * these Read Replicas are created outside of any VPC.</p> </li> </ul> </li> </ul>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>standard</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>True to copy all tags from the Read Replica to snapshots of the Read Replica,
     * and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>True to copy all tags from the Read Replica to snapshots of the Read Replica,
     * and otherwise false. The default is false.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>True to copy all tags from the Read Replica to snapshots of the Read Replica,
     * and otherwise false. The default is false.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you specify this parameter when you create a Read
     * Replica from an unencrypted DB instance, the Read Replica is encrypted. </p>
     * <p>If you create an encrypted Read Replica in the same AWS Region as the source
     * DB instance, then you do not have to specify a value for this parameter. The
     * Read Replica is encrypted with the same KMS key as the source DB instance. </p>
     * <p>If you create an encrypted Read Replica in a different AWS Region, then you
     * must specify a KMS key for the destination AWS Region. KMS encryption keys are
     * specific to the AWS Region that they are created in, and you can't use
     * encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you specify this parameter when you create a Read
     * Replica from an unencrypted DB instance, the Read Replica is encrypted. </p>
     * <p>If you create an encrypted Read Replica in the same AWS Region as the source
     * DB instance, then you do not have to specify a value for this parameter. The
     * Read Replica is encrypted with the same KMS key as the source DB instance. </p>
     * <p>If you create an encrypted Read Replica in a different AWS Region, then you
     * must specify a KMS key for the destination AWS Region. KMS encryption keys are
     * specific to the AWS Region that they are created in, and you can't use
     * encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you specify this parameter when you create a Read
     * Replica from an unencrypted DB instance, the Read Replica is encrypted. </p>
     * <p>If you create an encrypted Read Replica in the same AWS Region as the source
     * DB instance, then you do not have to specify a value for this parameter. The
     * Read Replica is encrypted with the same KMS key as the source DB instance. </p>
     * <p>If you create an encrypted Read Replica in a different AWS Region, then you
     * must specify a KMS key for the destination AWS Region. KMS encryption keys are
     * specific to the AWS Region that they are created in, and you can't use
     * encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you specify this parameter when you create a Read
     * Replica from an unencrypted DB instance, the Read Replica is encrypted. </p>
     * <p>If you create an encrypted Read Replica in the same AWS Region as the source
     * DB instance, then you do not have to specify a value for this parameter. The
     * Read Replica is encrypted with the same KMS key as the source DB instance. </p>
     * <p>If you create an encrypted Read Replica in a different AWS Region, then you
     * must specify a KMS key for the destination AWS Region. KMS encryption keys are
     * specific to the AWS Region that they are created in, and you can't use
     * encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you specify this parameter when you create a Read
     * Replica from an unencrypted DB instance, the Read Replica is encrypted. </p>
     * <p>If you create an encrypted Read Replica in the same AWS Region as the source
     * DB instance, then you do not have to specify a value for this parameter. The
     * Read Replica is encrypted with the same KMS key as the source DB instance. </p>
     * <p>If you create an encrypted Read Replica in a different AWS Region, then you
     * must specify a KMS key for the destination AWS Region. KMS encryption keys are
     * specific to the AWS Region that they are created in, and you can't use
     * encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you specify this parameter when you create a Read
     * Replica from an unencrypted DB instance, the Read Replica is encrypted. </p>
     * <p>If you create an encrypted Read Replica in the same AWS Region as the source
     * DB instance, then you do not have to specify a value for this parameter. The
     * Read Replica is encrypted with the same KMS key as the source DB instance. </p>
     * <p>If you create an encrypted Read Replica in a different AWS Region, then you
     * must specify a KMS key for the destination AWS Region. KMS encryption keys are
     * specific to the AWS Region that they are created in, and you can't use
     * encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID for an encrypted Read Replica. The KMS key ID is the
     * Amazon Resource Name (ARN), KMS key identifier, or the KMS key alias for the KMS
     * encryption key. </p> <p>If you specify this parameter when you create a Read
     * Replica from an unencrypted DB instance, the Read Replica is encrypted. </p>
     * <p>If you create an encrypted Read Replica in the same AWS Region as the source
     * DB instance, then you do not have to specify a value for this parameter. The
     * Read Replica is encrypted with the same KMS key as the source DB instance. </p>
     * <p>If you create an encrypted Read Replica in a different AWS Region, then you
     * must specify a KMS key for the destination AWS Region. KMS encryption keys are
     * specific to the AWS Region that they are created in, and you can't use
     * encryption keys from one AWS Region in another AWS Region. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBInstanceReadReplica</code> API action in the source AWS Region
     * that contains the source DB instance. </p> <p>You must specify this parameter
     * when you create an encrypted Read Replica from another AWS Region by using the
     * Amazon RDS API. You can specify the <code>--source-region</code> option instead
     * of this parameter when you create an encrypted Read Replica from another AWS
     * Region by using the AWS CLI. </p> <p>The presigned URL must be a valid request
     * for the <code>CreateDBInstanceReadReplica</code> API action that can be executed
     * in the source AWS Region that contains the encrypted source DB instance. The
     * presigned URL request must contain the following parameter values: </p> <ul>
     * <li> <p> <code>DestinationRegion</code> - The AWS Region that the encrypted Read
     * Replica is created in. This AWS Region is the same one where the
     * <code>CreateDBInstanceReadReplica</code> action is called that contains this
     * presigned URL. </p> <p>For example, if you create an encrypted DB instance in
     * the us-west-1 AWS Region, from a source DB instance in the us-east-2 AWS Region,
     * then you call the <code>CreateDBInstanceReadReplica</code> action in the
     * us-east-1 AWS Region and provide a presigned URL that contains a call to the
     * <code>CreateDBInstanceReadReplica</code> action in the us-west-2 AWS Region. For
     * this example, the <code>DestinationRegion</code> in the presigned URL must be
     * set to the us-east-1 AWS Region. </p> </li> <li> <p> <code>KmsKeyId</code> - The
     * AWS KMS key identifier for the key to use to encrypt the Read Replica in the
     * destination AWS Region. This is the same identifier for both the
     * <code>CreateDBInstanceReadReplica</code> action that is called in the
     * destination AWS Region, and the action contained in the presigned URL. </p>
     * </li> <li> <p> <code>SourceDBInstanceIdentifier</code> - The DB instance
     * identifier for the encrypted DB instance to be replicated. This identifier must
     * be in the Amazon Resource Name (ARN) format for the source AWS Region. For
     * example, if you are creating an encrypted Read Replica from a DB instance in the
     * us-west-2 AWS Region, then your <code>SourceDBInstanceIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:instance:mysql-instance1-20161115</code>.
     * </p> </li> </ul> <p>To learn how to generate a Signature Version 4 signed
     * request, see <a
     * href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (AWS Signature Version 4)</a> and <a
     * href="http://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <ul> <li> <p>For MySQL
     * 5.6, minor version 5.6.34 or higher</p> </li> <li> <p>For MySQL 5.7, minor
     * version 5.7.16 or higher</p> </li> <li> <p>Aurora 5.6 or higher.</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <ul> <li> <p>For MySQL
     * 5.6, minor version 5.6.34 or higher</p> </li> <li> <p>For MySQL 5.7, minor
     * version 5.7.16 or higher</p> </li> <li> <p>Aurora 5.6 or higher.</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <ul> <li> <p>For MySQL
     * 5.6, minor version 5.6.34 or higher</p> </li> <li> <p>For MySQL 5.7, minor
     * version 5.7.16 or higher</p> </li> <li> <p>Aurora 5.6 or higher.</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>True to enable Performance Insights for the read replica, and otherwise
     * false. </p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>True to enable Performance Insights for the read replica, and otherwise
     * false. </p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>True to enable Performance Insights for the read replica, and otherwise
     * false. </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the new DB instance is to export to CloudWatch
     * Logs.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
