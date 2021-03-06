/**
 * PowerDNS Authoritative HTTP API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.13
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.2.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Server.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Server::Server()
{
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Daemon_type = utility::conversions::to_string_t("");
    m_Daemon_typeIsSet = false;
    m_Version = utility::conversions::to_string_t("");
    m_VersionIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Config_url = utility::conversions::to_string_t("");
    m_Config_urlIsSet = false;
    m_Zones_url = utility::conversions::to_string_t("");
    m_Zones_urlIsSet = false;
}

Server::~Server()
{
}

void Server::validate()
{
    // TODO: implement validation
}

web::json::value Server::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_Daemon_typeIsSet)
    {
        val[utility::conversions::to_string_t("daemon_type")] = ModelBase::toJson(m_Daemon_type);
    }
    if(m_VersionIsSet)
    {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(m_Version);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_Config_urlIsSet)
    {
        val[utility::conversions::to_string_t("config_url")] = ModelBase::toJson(m_Config_url);
    }
    if(m_Zones_urlIsSet)
    {
        val[utility::conversions::to_string_t("zones_url")] = ModelBase::toJson(m_Zones_url);
    }

    return val;
}

void Server::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            setType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            setId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daemon_type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daemon_type"));
        if(!fieldValue.is_null())
        {
            setDaemonType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            setVersion(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            setUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_url"));
        if(!fieldValue.is_null())
        {
            setConfigUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zones_url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zones_url"));
        if(!fieldValue.is_null())
        {
            setZonesUrl(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Server::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_Daemon_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("daemon_type"), m_Daemon_type));
    }
    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("version"), m_Version));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_Config_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("config_url"), m_Config_url));
    }
    if(m_Zones_urlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("zones_url"), m_Zones_url));
    }
}

void Server::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("daemon_type")))
    {
        setDaemonType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("daemon_type"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("version")))
    {
        setVersion(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("version"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("url"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("config_url")))
    {
        setConfigUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("config_url"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("zones_url")))
    {
        setZonesUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("zones_url"))));
    }
}

utility::string_t Server::getType() const
{
    return m_Type;
}

void Server::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Server::typeIsSet() const
{
    return m_TypeIsSet;
}

void Server::unsetType()
{
    m_TypeIsSet = false;
}

utility::string_t Server::getId() const
{
    return m_Id;
}

void Server::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Server::idIsSet() const
{
    return m_IdIsSet;
}

void Server::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t Server::getDaemonType() const
{
    return m_Daemon_type;
}

void Server::setDaemonType(const utility::string_t& value)
{
    m_Daemon_type = value;
    m_Daemon_typeIsSet = true;
}

bool Server::daemonTypeIsSet() const
{
    return m_Daemon_typeIsSet;
}

void Server::unsetDaemon_type()
{
    m_Daemon_typeIsSet = false;
}

utility::string_t Server::getVersion() const
{
    return m_Version;
}

void Server::setVersion(const utility::string_t& value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool Server::versionIsSet() const
{
    return m_VersionIsSet;
}

void Server::unsetVersion()
{
    m_VersionIsSet = false;
}

utility::string_t Server::getUrl() const
{
    return m_Url;
}

void Server::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool Server::urlIsSet() const
{
    return m_UrlIsSet;
}

void Server::unsetUrl()
{
    m_UrlIsSet = false;
}

utility::string_t Server::getConfigUrl() const
{
    return m_Config_url;
}

void Server::setConfigUrl(const utility::string_t& value)
{
    m_Config_url = value;
    m_Config_urlIsSet = true;
}

bool Server::configUrlIsSet() const
{
    return m_Config_urlIsSet;
}

void Server::unsetConfig_url()
{
    m_Config_urlIsSet = false;
}

utility::string_t Server::getZonesUrl() const
{
    return m_Zones_url;
}

void Server::setZonesUrl(const utility::string_t& value)
{
    m_Zones_url = value;
    m_Zones_urlIsSet = true;
}

bool Server::zonesUrlIsSet() const
{
    return m_Zones_urlIsSet;
}

void Server::unsetZones_url()
{
    m_Zones_urlIsSet = false;
}

}
}
}
}


