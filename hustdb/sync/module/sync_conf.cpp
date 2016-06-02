/**
******************************************************************************
* NOTE : Generated by cppgen. It is NOT supposed to modify this file.
*****************************************************************************/
#include "sync_conf.h"

namespace jos_lib
{
    NetworkConf::NetworkConf()
    {
        // fields from jos_lib::NetworkConf
        port = 8089;
        backlog = 512;
        enable_reuseport = true;
        enable_nodelay = true;
        enable_defer_accept = true;
        max_body_size = 16777216;
        max_keepalive_requests = 1024;
        recv_timeout = 300;
        send_timeout = 300;
        threads = 2;
        user = "sync";
        passwd = "sync";
        access_allow = "127.0.0.1";
        json_has_port = false;
        json_has_backlog = false;
        json_has_enable_reuseport = false;
        json_has_enable_nodelay = false;
        json_has_enable_defer_accept = false;
        json_has_max_body_size = false;
        json_has_max_keepalive_requests = false;
        json_has_recv_timeout = false;
        json_has_send_timeout = false;
        json_has_threads = false;
        json_has_user = false;
        json_has_passwd = false;
        json_has_access_allow = false;
    }

    bool NetworkConf::operator==(const NetworkConf& obj) const
    {
        // fields from jos_lib::NetworkConf
        if (!(port == obj.port)) return false;
        if (!(backlog == obj.backlog)) return false;
        if (!(enable_reuseport == obj.enable_reuseport)) return false;
        if (!(enable_nodelay == obj.enable_nodelay)) return false;
        if (!(enable_defer_accept == obj.enable_defer_accept)) return false;
        if (!(max_body_size == obj.max_body_size)) return false;
        if (!(max_keepalive_requests == obj.max_keepalive_requests)) return false;
        if (!(recv_timeout == obj.recv_timeout)) return false;
        if (!(send_timeout == obj.send_timeout)) return false;
        if (!(threads == obj.threads)) return false;
        if (!(user == obj.user)) return false;
        if (!(passwd == obj.passwd)) return false;
        if (!(access_allow == obj.access_allow)) return false;

        return true;
    }

} // jos_lib

namespace jos_lib
{
    SyncConf::SyncConf()
    {
        // fields from jos_lib::SyncConf
        daemon = true;
        logs_path = "/data/hustdbha/logs/";
        ngx_path = "/data/hustdbha/";
        auth_path = "/data/hustdbha/conf/htpasswd";
        threads = 4;
        release_interval = 5000;
        checkdb_interval = 5000;
        checklog_interval = 60000;
        json_has_daemon = false;
        json_has_logs_path = false;
        json_has_ngx_path = false;
        json_has_auth_path = false;
        json_has_threads = false;
        json_has_release_interval = false;
        json_has_checkdb_interval = false;
        json_has_checklog_interval = false;
    }

    bool SyncConf::operator==(const SyncConf& obj) const
    {
        // fields from jos_lib::SyncConf
        if (!(daemon == obj.daemon)) return false;
        if (!(logs_path == obj.logs_path)) return false;
        if (!(ngx_path == obj.ngx_path)) return false;
        if (!(auth_path == obj.auth_path)) return false;
        if (!(threads == obj.threads)) return false;
        if (!(release_interval == obj.release_interval)) return false;
        if (!(checkdb_interval == obj.checkdb_interval)) return false;
        if (!(checklog_interval == obj.checklog_interval)) return false;

        return true;
    }

} // jos_lib

namespace jos_lib
{
    SyncServerConf::SyncServerConf()
    {
        // fields from jos_lib::SyncServerConf
        json_has_network = false;
        json_has_sync = false;
    }

    bool SyncServerConf::operator==(const SyncServerConf& obj) const
    {
        // fields from jos_lib::SyncServerConf
        if (!(network == obj.network)) return false;
        if (!(sync == obj.sync)) return false;

        return true;
    }

} // jos_lib

namespace jos_lib
{

    /*
    * generate from "sync_conf.json": "jos_lib::NetworkConf"
    */
    bool Serialize(const jos_lib::NetworkConf& obj_val, jos_lib::Allocator& alloc, rapidjson::Value& json_val)
    {
        do
        {
            json_val.SetObject();
            // fields from "jos_lib::NetworkConf"
            if (!Serialize(obj_val.port, "port", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.backlog, "backlog", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.enable_reuseport, "enable_reuseport", alloc, json_val)) break; // @(field_type : bool)
            if (!Serialize(obj_val.enable_nodelay, "enable_nodelay", alloc, json_val)) break; // @(field_type : bool)
            if (!Serialize(obj_val.enable_defer_accept, "enable_defer_accept", alloc, json_val)) break; // @(field_type : bool)
            if (!Serialize(obj_val.max_body_size, "max_body_size", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.max_keepalive_requests, "max_keepalive_requests", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.recv_timeout, "recv_timeout", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.send_timeout, "send_timeout", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.threads, "threads", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.user, "user", alloc, json_val)) break; // @(field_type : std::string)
            if (!Serialize(obj_val.passwd, "passwd", alloc, json_val)) break; // @(field_type : std::string)
            if (!Serialize(obj_val.access_allow, "access_allow", alloc, json_val)) break; // @(field_type : std::string)

            return true;
        } while (0);

        return false;
    }

    bool Deserialize(const rapidjson::Value& json_val, jos_lib::NetworkConf& obj_val)
    {
        do
        {
            // fields from "jos_lib::NetworkConf"
            if (!Deserialize(json_val, "port", obj_val.port, obj_val.json_has_port)) break; // @(field_type : int)
            if (!Deserialize(json_val, "backlog", obj_val.backlog, obj_val.json_has_backlog)) break; // @(field_type : int)
            if (!Deserialize(json_val, "enable_reuseport", obj_val.enable_reuseport, obj_val.json_has_enable_reuseport)) break; // @(field_type : bool)
            if (!Deserialize(json_val, "enable_nodelay", obj_val.enable_nodelay, obj_val.json_has_enable_nodelay)) break; // @(field_type : bool)
            if (!Deserialize(json_val, "enable_defer_accept", obj_val.enable_defer_accept, obj_val.json_has_enable_defer_accept)) break; // @(field_type : bool)
            if (!Deserialize(json_val, "max_body_size", obj_val.max_body_size, obj_val.json_has_max_body_size)) break; // @(field_type : int)
            if (!Deserialize(json_val, "max_keepalive_requests", obj_val.max_keepalive_requests, obj_val.json_has_max_keepalive_requests)) break; // @(field_type : int)
            if (!Deserialize(json_val, "recv_timeout", obj_val.recv_timeout, obj_val.json_has_recv_timeout)) break; // @(field_type : int)
            if (!Deserialize(json_val, "send_timeout", obj_val.send_timeout, obj_val.json_has_send_timeout)) break; // @(field_type : int)
            if (!Deserialize(json_val, "threads", obj_val.threads, obj_val.json_has_threads)) break; // @(field_type : int)
            if (!Deserialize(json_val, "user", obj_val.user, obj_val.json_has_user)) break; // @(field_type : std::string)
            if (!Deserialize(json_val, "passwd", obj_val.passwd, obj_val.json_has_passwd)) break; // @(field_type : std::string)
            if (!Deserialize(json_val, "access_allow", obj_val.access_allow, obj_val.json_has_access_allow)) break; // @(field_type : std::string)

            return true;
        } while (0);

        return false;
    }


    /*
    * generate from "sync_conf.json": "jos_lib::SyncConf"
    */
    bool Serialize(const jos_lib::SyncConf& obj_val, jos_lib::Allocator& alloc, rapidjson::Value& json_val)
    {
        do
        {
            json_val.SetObject();
            // fields from "jos_lib::SyncConf"
            if (!Serialize(obj_val.daemon, "daemon", alloc, json_val)) break; // @(field_type : bool)
            if (!Serialize(obj_val.logs_path, "logs_path", alloc, json_val)) break; // @(field_type : std::string)
            if (!Serialize(obj_val.ngx_path, "ngx_path", alloc, json_val)) break; // @(field_type : std::string)
            if (!Serialize(obj_val.auth_path, "auth_path", alloc, json_val)) break; // @(field_type : std::string)
            if (!Serialize(obj_val.threads, "threads", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.release_interval, "release_interval", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.checkdb_interval, "checkdb_interval", alloc, json_val)) break; // @(field_type : int)
            if (!Serialize(obj_val.checklog_interval, "checklog_interval", alloc, json_val)) break; // @(field_type : int)

            return true;
        } while (0);

        return false;
    }

    bool Deserialize(const rapidjson::Value& json_val, jos_lib::SyncConf& obj_val)
    {
        do
        {
            // fields from "jos_lib::SyncConf"
            if (!Deserialize(json_val, "daemon", obj_val.daemon, obj_val.json_has_daemon)) break; // @(field_type : bool)
            if (!Deserialize(json_val, "logs_path", obj_val.logs_path, obj_val.json_has_logs_path)) break; // @(field_type : std::string)
            if (!Deserialize(json_val, "ngx_path", obj_val.ngx_path, obj_val.json_has_ngx_path)) break; // @(field_type : std::string)
            if (!Deserialize(json_val, "auth_path", obj_val.auth_path, obj_val.json_has_auth_path)) break; // @(field_type : std::string)
            if (!Deserialize(json_val, "threads", obj_val.threads, obj_val.json_has_threads)) break; // @(field_type : int)
            if (!Deserialize(json_val, "release_interval", obj_val.release_interval, obj_val.json_has_release_interval)) break; // @(field_type : int)
            if (!Deserialize(json_val, "checkdb_interval", obj_val.checkdb_interval, obj_val.json_has_checkdb_interval)) break; // @(field_type : int)
            if (!Deserialize(json_val, "checklog_interval", obj_val.checklog_interval, obj_val.json_has_checklog_interval)) break; // @(field_type : int)

            return true;
        } while (0);

        return false;
    }


    /*
    * generate from "sync_conf.json": "jos_lib::SyncServerConf"
    */
    bool Serialize(const jos_lib::SyncServerConf& obj_val, jos_lib::Allocator& alloc, rapidjson::Value& json_val)
    {
        do
        {
            json_val.SetObject();
            // fields from "jos_lib::SyncServerConf"
            if (!Serialize(obj_val.network, "network", alloc, json_val)) break; // @(field_type : NetworkConf)
            if (!Serialize(obj_val.sync, "sync", alloc, json_val)) break; // @(field_type : SyncConf)

            return true;
        } while (0);

        return false;
    }

    bool Deserialize(const rapidjson::Value& json_val, jos_lib::SyncServerConf& obj_val)
    {
        do
        {
            // fields from "jos_lib::SyncServerConf"
            if (!Deserialize(json_val, "network", obj_val.network, obj_val.json_has_network)) break; // @(field_type : NetworkConf)
            if (!Deserialize(json_val, "sync", obj_val.sync, obj_val.json_has_sync)) break; // @(field_type : SyncConf)

            return true;
        } while (0);

        return false;
    }

} // jos_lib