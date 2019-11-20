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

/*
 * ZonemetadataApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ZonemetadataApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ZonemetadataApi_H_


#include "../ApiClient.h"

#include "Metadata.h"
#include <vector>
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  ZonemetadataApi 
{
public:

    explicit ZonemetadataApi( std::shared_ptr<ApiClient> apiClient );

    virtual ~ZonemetadataApi();

    /// <summary>
    /// Creates a set of metadata entries
    /// </summary>
    /// <remarks>
    /// Creates a set of metadata entries of given kind for the zone. Existing metadata entries for the zone with the same kind are not overwritten.
    /// </remarks>
    /// <param name="serverId">The id of the server to retrieve</param>
    /// <param name="zoneId"></param>
    /// <param name="metadata">List of metadata to add/create</param>
    pplx::task<void> createMetadata(
        utility::string_t serverId,
        utility::string_t zoneId,
        std::vector<std::shared_ptr<Metadata>> metadata
    );
    /// <summary>
    /// Delete all items of a single kind of domain metadata.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="serverId">The id of the server to retrieve</param>
    /// <param name="zoneId">The id of the zone to retrieve</param>
    /// <param name="metadataKind">???</param>
    pplx::task<void> deleteMetadata(
        utility::string_t serverId,
        utility::string_t zoneId,
        utility::string_t metadataKind
    );
    /// <summary>
    /// Get the content of a single kind of domain metadata as a list of MetaData objects.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="serverId">The id of the server to retrieve</param>
    /// <param name="zoneId">The id of the zone to retrieve</param>
    /// <param name="metadataKind">???</param>
    pplx::task<std::shared_ptr<Metadata>> getMetadata(
        utility::string_t serverId,
        utility::string_t zoneId,
        utility::string_t metadataKind
    );
    /// <summary>
    /// Get all the MetaData associated with the zone.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="serverId">The id of the server to retrieve</param>
    /// <param name="zoneId">The id of the zone to retrieve</param>
    pplx::task<std::vector<std::shared_ptr<Metadata>>> listMetadata(
        utility::string_t serverId,
        utility::string_t zoneId
    );
    /// <summary>
    /// Modify the content of a single kind of domain metadata.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="serverId">The id of the server to retrieve</param>
    /// <param name="zoneId"></param>
    /// <param name="metadataKind">The kind of metadata</param>
    /// <param name="metadata">metadata to add/create</param>
    pplx::task<void> modifyMetadata(
        utility::string_t serverId,
        utility::string_t zoneId,
        utility::string_t metadataKind,
        std::shared_ptr<Metadata> metadata
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ZonemetadataApi_H_ */
