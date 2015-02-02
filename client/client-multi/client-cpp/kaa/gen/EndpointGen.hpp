/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef KAA_GEN_ENDPOINTGEN_HPP_3437118903__H_
#define KAA_GEN_ENDPOINTGEN_HPP_3437118903__H_


#include <sstream>
#include "boost/any.hpp"
#include "avro/Specific.hh"
#include "avro/Encoder.hh"
#include "avro/Decoder.hh"

namespace kaa {
struct EventClassFamilyVersionInfo {
    std::string name;
    int32_t version;
    EventClassFamilyVersionInfo() :
        name(std::string()),
        version(int32_t())
        { }
};

struct _endpoint_avsc_Union__0__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<EventClassFamilyVersionInfo > get_array() const;
    void set_array(const std::vector<EventClassFamilyVersionInfo >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__0__();
};

struct EndpointVersionInfo {
    typedef _endpoint_avsc_Union__0__ eventFamilyVersions_t;
    int32_t configVersion;
    int32_t profileVersion;
    int32_t systemNfVersion;
    int32_t userNfVersion;
    eventFamilyVersions_t eventFamilyVersions;
    int32_t logSchemaVersion;
    EndpointVersionInfo() :
        configVersion(int32_t()),
        profileVersion(int32_t()),
        systemNfVersion(int32_t()),
        userNfVersion(int32_t()),
        eventFamilyVersions(eventFamilyVersions_t()),
        logSchemaVersion(int32_t())
        { }
};

struct TopicState {
    std::string topicId;
    int32_t seqNumber;
    TopicState() :
        topicId(std::string()),
        seqNumber(int32_t())
        { }
};

enum SyncResponseStatus {
    NO_DELTA,
    DELTA,
    RESYNC,
};

enum NotificationType {
    SYSTEM,
    CUSTOM,
};

enum SubscriptionType {
    MANDATORY,
    OPTIONAL,
};

enum SubscriptionCommandType {
    ADD,
    REMOVE,
};

enum SyncResponseResultType {
    SUCCESS,
    FAILURE,
    PROFILE_RESYNC,
    REDIRECT,
};

enum LogDeliveryErrorCode {
    NO_APPENDERS_CONFIGURED,
    APPENDER_INTERNAL_ERROR,
    REMOTE_CONNECTION_ERROR,
    REMOTE_INTERNAL_ERROR,
};

struct SubscriptionCommand {
    std::string topicId;
    SubscriptionCommandType command;
    SubscriptionCommand() :
        topicId(std::string()),
        command(SubscriptionCommandType())
        { }
};

struct UserAttachRequest {
    std::string userExternalId;
    std::string userAccessToken;
    UserAttachRequest() :
        userExternalId(std::string()),
        userAccessToken(std::string())
        { }
};

struct UserAttachResponse {
    SyncResponseResultType result;
    UserAttachResponse() :
        result(SyncResponseResultType())
        { }
};

struct UserAttachNotification {
    std::string userExternalId;
    std::string endpointAccessToken;
    UserAttachNotification() :
        userExternalId(std::string()),
        endpointAccessToken(std::string())
        { }
};

struct UserDetachNotification {
    std::string endpointAccessToken;
    UserDetachNotification() :
        endpointAccessToken(std::string())
        { }
};

struct EndpointAttachRequest {
    int32_t requestId;
    std::string endpointAccessToken;
    EndpointAttachRequest() :
        requestId(int32_t()),
        endpointAccessToken(std::string())
        { }
};

struct _endpoint_avsc_Union__1__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::string get_string() const;
    void set_string(const std::string& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__1__();
};

struct EndpointAttachResponse {
    typedef _endpoint_avsc_Union__1__ endpointKeyHash_t;
    int32_t requestId;
    endpointKeyHash_t endpointKeyHash;
    SyncResponseResultType result;
    EndpointAttachResponse() :
        requestId(int32_t()),
        endpointKeyHash(endpointKeyHash_t()),
        result(SyncResponseResultType())
        { }
};

struct EndpointDetachRequest {
    int32_t requestId;
    std::string endpointKeyHash;
    EndpointDetachRequest() :
        requestId(int32_t()),
        endpointKeyHash(std::string())
        { }
};

struct EndpointDetachResponse {
    int32_t requestId;
    SyncResponseResultType result;
    EndpointDetachResponse() :
        requestId(int32_t()),
        result(SyncResponseResultType())
        { }
};

struct _endpoint_avsc_Union__2__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::string get_string() const;
    void set_string(const std::string& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__2__();
};

struct _endpoint_avsc_Union__3__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::string get_string() const;
    void set_string(const std::string& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__3__();
};

struct Event {
    typedef _endpoint_avsc_Union__2__ source_t;
    typedef _endpoint_avsc_Union__3__ target_t;
    int32_t seqNum;
    std::string eventClassFQN;
    std::vector<uint8_t> eventData;
    source_t source;
    target_t target;
    Event() :
        seqNum(int32_t()),
        eventClassFQN(std::string()),
        eventData(std::vector<uint8_t>()),
        source(source_t()),
        target(target_t())
        { }
};

struct EventListenersRequest {
    int32_t requestId;
    std::vector<std::string > eventClassFQNs;
    EventListenersRequest() :
        requestId(int32_t()),
        eventClassFQNs(std::vector<std::string >())
        { }
};

struct _endpoint_avsc_Union__4__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<std::string > get_array() const;
    void set_array(const std::vector<std::string >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__4__();
};

struct EventListenersResponse {
    typedef _endpoint_avsc_Union__4__ listeners_t;
    int32_t requestId;
    listeners_t listeners;
    SyncResponseResultType result;
    EventListenersResponse() :
        requestId(int32_t()),
        listeners(listeners_t()),
        result(SyncResponseResultType())
        { }
};

struct EventSequenceNumberRequest {
    EventSequenceNumberRequest()
        { }
};

struct EventSequenceNumberResponse {
    int32_t seqNum;
    EventSequenceNumberResponse() :
        seqNum(int32_t())
        { }
};

struct _endpoint_avsc_Union__5__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::string get_string() const;
    void set_string(const std::string& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__5__();
};

struct _endpoint_avsc_Union__6__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    int32_t get_int() const;
    void set_int(const int32_t& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__6__();
};

struct Notification {
    typedef _endpoint_avsc_Union__5__ uid_t;
    typedef _endpoint_avsc_Union__6__ seqNumber_t;
    std::string topicId;
    NotificationType type;
    uid_t uid;
    seqNumber_t seqNumber;
    std::vector<uint8_t> body;
    Notification() :
        topicId(std::string()),
        type(NotificationType()),
        uid(uid_t()),
        seqNumber(seqNumber_t()),
        body(std::vector<uint8_t>())
        { }
};

struct Topic {
    std::string id;
    std::string name;
    SubscriptionType subscriptionType;
    Topic() :
        id(std::string()),
        name(std::string()),
        subscriptionType(SubscriptionType())
        { }
};

struct LogEntry {
    std::vector<uint8_t> data;
    LogEntry() :
        data(std::vector<uint8_t>())
        { }
};

struct _endpoint_avsc_Union__7__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<uint8_t> get_bytes() const;
    void set_bytes(const std::vector<uint8_t>& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__7__();
};

struct SyncRequestMetaData {
    typedef _endpoint_avsc_Union__7__ profileHash_t;
    std::string applicationToken;
    std::vector<uint8_t> endpointPublicKeyHash;
    profileHash_t profileHash;
    int64_t timeout;
    SyncRequestMetaData() :
        applicationToken(std::string()),
        endpointPublicKeyHash(std::vector<uint8_t>()),
        profileHash(profileHash_t()),
        timeout(int64_t())
        { }
};

struct _endpoint_avsc_Union__8__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<uint8_t> get_bytes() const;
    void set_bytes(const std::vector<uint8_t>& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__8__();
};

struct _endpoint_avsc_Union__9__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::string get_string() const;
    void set_string(const std::string& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__9__();
};

struct ProfileSyncRequest {
    typedef _endpoint_avsc_Union__8__ endpointPublicKey_t;
    typedef _endpoint_avsc_Union__9__ endpointAccessToken_t;
    endpointPublicKey_t endpointPublicKey;
    std::vector<uint8_t> profileBody;
    EndpointVersionInfo versionInfo;
    endpointAccessToken_t endpointAccessToken;
    ProfileSyncRequest() :
        endpointPublicKey(endpointPublicKey_t()),
        profileBody(std::vector<uint8_t>()),
        versionInfo(EndpointVersionInfo()),
        endpointAccessToken(endpointAccessToken_t())
        { }
};

struct _endpoint_avsc_Union__10__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<uint8_t> get_bytes() const;
    void set_bytes(const std::vector<uint8_t>& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__10__();
};

struct ConfigurationSyncRequest {
    typedef _endpoint_avsc_Union__10__ configurationHash_t;
    int32_t appStateSeqNumber;
    configurationHash_t configurationHash;
    ConfigurationSyncRequest() :
        appStateSeqNumber(int32_t()),
        configurationHash(configurationHash_t())
        { }
};

struct _endpoint_avsc_Union__11__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<uint8_t> get_bytes() const;
    void set_bytes(const std::vector<uint8_t>& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__11__();
};

struct _endpoint_avsc_Union__12__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<TopicState > get_array() const;
    void set_array(const std::vector<TopicState >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__12__();
};

struct _endpoint_avsc_Union__13__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<std::string > get_array() const;
    void set_array(const std::vector<std::string >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__13__();
};

struct _endpoint_avsc_Union__14__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<SubscriptionCommand > get_array() const;
    void set_array(const std::vector<SubscriptionCommand >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__14__();
};

struct NotificationSyncRequest {
    typedef _endpoint_avsc_Union__11__ topicListHash_t;
    typedef _endpoint_avsc_Union__12__ topicStates_t;
    typedef _endpoint_avsc_Union__13__ acceptedUnicastNotifications_t;
    typedef _endpoint_avsc_Union__14__ subscriptionCommands_t;
    int32_t appStateSeqNumber;
    topicListHash_t topicListHash;
    topicStates_t topicStates;
    acceptedUnicastNotifications_t acceptedUnicastNotifications;
    subscriptionCommands_t subscriptionCommands;
    NotificationSyncRequest() :
        appStateSeqNumber(int32_t()),
        topicListHash(topicListHash_t()),
        topicStates(topicStates_t()),
        acceptedUnicastNotifications(acceptedUnicastNotifications_t()),
        subscriptionCommands(subscriptionCommands_t())
        { }
};

struct _endpoint_avsc_Union__15__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    UserAttachRequest get_UserAttachRequest() const;
    void set_UserAttachRequest(const UserAttachRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__15__();
};

struct _endpoint_avsc_Union__16__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<EndpointAttachRequest > get_array() const;
    void set_array(const std::vector<EndpointAttachRequest >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__16__();
};

struct _endpoint_avsc_Union__17__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<EndpointDetachRequest > get_array() const;
    void set_array(const std::vector<EndpointDetachRequest >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__17__();
};

struct UserSyncRequest {
    typedef _endpoint_avsc_Union__15__ userAttachRequest_t;
    typedef _endpoint_avsc_Union__16__ endpointAttachRequests_t;
    typedef _endpoint_avsc_Union__17__ endpointDetachRequests_t;
    userAttachRequest_t userAttachRequest;
    endpointAttachRequests_t endpointAttachRequests;
    endpointDetachRequests_t endpointDetachRequests;
    UserSyncRequest() :
        userAttachRequest(userAttachRequest_t()),
        endpointAttachRequests(endpointAttachRequests_t()),
        endpointDetachRequests(endpointDetachRequests_t())
        { }
};

struct _endpoint_avsc_Union__18__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    EventSequenceNumberRequest get_EventSequenceNumberRequest() const;
    void set_EventSequenceNumberRequest(const EventSequenceNumberRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__18__();
};

struct _endpoint_avsc_Union__19__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<EventListenersRequest > get_array() const;
    void set_array(const std::vector<EventListenersRequest >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__19__();
};

struct _endpoint_avsc_Union__20__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<Event > get_array() const;
    void set_array(const std::vector<Event >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__20__();
};

struct EventSyncRequest {
    typedef _endpoint_avsc_Union__18__ eventSequenceNumberRequest_t;
    typedef _endpoint_avsc_Union__19__ eventListenersRequests_t;
    typedef _endpoint_avsc_Union__20__ events_t;
    eventSequenceNumberRequest_t eventSequenceNumberRequest;
    eventListenersRequests_t eventListenersRequests;
    events_t events;
    EventSyncRequest() :
        eventSequenceNumberRequest(eventSequenceNumberRequest_t()),
        eventListenersRequests(eventListenersRequests_t()),
        events(events_t())
        { }
};

struct _endpoint_avsc_Union__21__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<LogEntry > get_array() const;
    void set_array(const std::vector<LogEntry >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__21__();
};

struct LogSyncRequest {
    typedef _endpoint_avsc_Union__21__ logEntries_t;
    int32_t requestId;
    logEntries_t logEntries;
    LogSyncRequest() :
        requestId(int32_t()),
        logEntries(logEntries_t())
        { }
};

struct ProfileSyncResponse {
    SyncResponseStatus responseStatus;
    ProfileSyncResponse() :
        responseStatus(SyncResponseStatus())
        { }
};

struct _endpoint_avsc_Union__22__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<uint8_t> get_bytes() const;
    void set_bytes(const std::vector<uint8_t>& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__22__();
};

struct _endpoint_avsc_Union__23__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<uint8_t> get_bytes() const;
    void set_bytes(const std::vector<uint8_t>& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__23__();
};

struct ConfigurationSyncResponse {
    typedef _endpoint_avsc_Union__22__ confSchemaBody_t;
    typedef _endpoint_avsc_Union__23__ confDeltaBody_t;
    int32_t appStateSeqNumber;
    SyncResponseStatus responseStatus;
    confSchemaBody_t confSchemaBody;
    confDeltaBody_t confDeltaBody;
    ConfigurationSyncResponse() :
        appStateSeqNumber(int32_t()),
        responseStatus(SyncResponseStatus()),
        confSchemaBody(confSchemaBody_t()),
        confDeltaBody(confDeltaBody_t())
        { }
};

struct _endpoint_avsc_Union__24__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<Notification > get_array() const;
    void set_array(const std::vector<Notification >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__24__();
};

struct _endpoint_avsc_Union__25__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<Topic > get_array() const;
    void set_array(const std::vector<Topic >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__25__();
};

struct NotificationSyncResponse {
    typedef _endpoint_avsc_Union__24__ notifications_t;
    typedef _endpoint_avsc_Union__25__ availableTopics_t;
    int32_t appStateSeqNumber;
    SyncResponseStatus responseStatus;
    notifications_t notifications;
    availableTopics_t availableTopics;
    NotificationSyncResponse() :
        appStateSeqNumber(int32_t()),
        responseStatus(SyncResponseStatus()),
        notifications(notifications_t()),
        availableTopics(availableTopics_t())
        { }
};

struct _endpoint_avsc_Union__26__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    UserAttachResponse get_UserAttachResponse() const;
    void set_UserAttachResponse(const UserAttachResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__26__();
};

struct _endpoint_avsc_Union__27__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    UserAttachNotification get_UserAttachNotification() const;
    void set_UserAttachNotification(const UserAttachNotification& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__27__();
};

struct _endpoint_avsc_Union__28__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    UserDetachNotification get_UserDetachNotification() const;
    void set_UserDetachNotification(const UserDetachNotification& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__28__();
};

struct _endpoint_avsc_Union__29__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<EndpointAttachResponse > get_array() const;
    void set_array(const std::vector<EndpointAttachResponse >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__29__();
};

struct _endpoint_avsc_Union__30__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<EndpointDetachResponse > get_array() const;
    void set_array(const std::vector<EndpointDetachResponse >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__30__();
};

struct UserSyncResponse {
    typedef _endpoint_avsc_Union__26__ userAttachResponse_t;
    typedef _endpoint_avsc_Union__27__ userAttachNotification_t;
    typedef _endpoint_avsc_Union__28__ userDetachNotification_t;
    typedef _endpoint_avsc_Union__29__ endpointAttachResponses_t;
    typedef _endpoint_avsc_Union__30__ endpointDetachResponses_t;
    userAttachResponse_t userAttachResponse;
    userAttachNotification_t userAttachNotification;
    userDetachNotification_t userDetachNotification;
    endpointAttachResponses_t endpointAttachResponses;
    endpointDetachResponses_t endpointDetachResponses;
    UserSyncResponse() :
        userAttachResponse(userAttachResponse_t()),
        userAttachNotification(userAttachNotification_t()),
        userDetachNotification(userDetachNotification_t()),
        endpointAttachResponses(endpointAttachResponses_t()),
        endpointDetachResponses(endpointDetachResponses_t())
        { }
};

struct _endpoint_avsc_Union__31__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    EventSequenceNumberResponse get_EventSequenceNumberResponse() const;
    void set_EventSequenceNumberResponse(const EventSequenceNumberResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__31__();
};

struct _endpoint_avsc_Union__32__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<EventListenersResponse > get_array() const;
    void set_array(const std::vector<EventListenersResponse >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__32__();
};

struct _endpoint_avsc_Union__33__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<Event > get_array() const;
    void set_array(const std::vector<Event >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__33__();
};

struct EventSyncResponse {
    typedef _endpoint_avsc_Union__31__ eventSequenceNumberResponse_t;
    typedef _endpoint_avsc_Union__32__ eventListenersResponses_t;
    typedef _endpoint_avsc_Union__33__ events_t;
    eventSequenceNumberResponse_t eventSequenceNumberResponse;
    eventListenersResponses_t eventListenersResponses;
    events_t events;
    EventSyncResponse() :
        eventSequenceNumberResponse(eventSequenceNumberResponse_t()),
        eventListenersResponses(eventListenersResponses_t()),
        events(events_t())
        { }
};

/*
<<<<<<< HEAD
struct _endpoint_avsc_Union__35__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    LogDeliveryErrorCode get_LogDeliveryErrorCode() const;
    void set_LogDeliveryErrorCode(const LogDeliveryErrorCode& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__35__();
};

struct LogDeliveryStatus {
    typedef _endpoint_avsc_Union__35__ errorCode_t;
    std::string requestId;
    SyncResponseResultType result;
    errorCode_t errorCode;
    LogDeliveryStatus() :
        requestId(std::string()),
        result(SyncResponseResultType()),
        errorCode(errorCode_t())
        { }
};

struct _endpoint_avsc_Union__36__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    std::vector<LogDeliveryStatus > get_array() const;
    void set_array(const std::vector<LogDeliveryStatus >& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__36__();
};

struct LogSyncResponse {
    typedef _endpoint_avsc_Union__36__ deliveryStatuses_t;
    deliveryStatuses_t deliveryStatuses;
    LogSyncResponse() :
        deliveryStatuses(deliveryStatuses_t())
=======
*/
struct LogSyncResponse {
    int32_t requestId;
    SyncResponseResultType result;
    LogSyncResponse() :
        requestId(int32_t()),
        result(SyncResponseResultType())
//>>>>>>> master
        { }
};

struct RedirectSyncResponse {
    std::string dnsName;
    RedirectSyncResponse() :
        dnsName(std::string())
        { }
};

<<<<<<< HEAD
struct _endpoint_avsc_Union__37__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    int32_t get_int() const;
    void set_int(const int32_t& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__37__();
};

struct _endpoint_avsc_Union__38__ {
=======
struct _endpoint_avsc_Union__34__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    SyncRequestMetaData get_SyncRequestMetaData() const;
    void set_SyncRequestMetaData(const SyncRequestMetaData& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__38__();
};

struct _endpoint_avsc_Union__39__ {
=======
    _endpoint_avsc_Union__34__();
};

struct _endpoint_avsc_Union__35__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    ProfileSyncRequest get_ProfileSyncRequest() const;
    void set_ProfileSyncRequest(const ProfileSyncRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__39__();
};

struct _endpoint_avsc_Union__40__ {
=======
    _endpoint_avsc_Union__35__();
};

struct _endpoint_avsc_Union__36__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    ConfigurationSyncRequest get_ConfigurationSyncRequest() const;
    void set_ConfigurationSyncRequest(const ConfigurationSyncRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__40__();
};

struct _endpoint_avsc_Union__41__ {
=======
    _endpoint_avsc_Union__36__();
};

struct _endpoint_avsc_Union__37__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    NotificationSyncRequest get_NotificationSyncRequest() const;
    void set_NotificationSyncRequest(const NotificationSyncRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__41__();
};

struct _endpoint_avsc_Union__42__ {
=======
    _endpoint_avsc_Union__37__();
};

struct _endpoint_avsc_Union__38__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    UserSyncRequest get_UserSyncRequest() const;
    void set_UserSyncRequest(const UserSyncRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__42__();
};

struct _endpoint_avsc_Union__43__ {
=======
    _endpoint_avsc_Union__38__();
};

struct _endpoint_avsc_Union__39__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    EventSyncRequest get_EventSyncRequest() const;
    void set_EventSyncRequest(const EventSyncRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__43__();
};

struct _endpoint_avsc_Union__44__ {
=======
    _endpoint_avsc_Union__39__();
};

struct _endpoint_avsc_Union__40__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    LogSyncRequest get_LogSyncRequest() const;
    void set_LogSyncRequest(const LogSyncRequest& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__44__();
};

struct SyncRequest {
    typedef _endpoint_avsc_Union__37__ requestId_t;
    typedef _endpoint_avsc_Union__38__ syncRequestMetaData_t;
    typedef _endpoint_avsc_Union__39__ profileSyncRequest_t;
    typedef _endpoint_avsc_Union__40__ configurationSyncRequest_t;
    typedef _endpoint_avsc_Union__41__ notificationSyncRequest_t;
    typedef _endpoint_avsc_Union__42__ userSyncRequest_t;
    typedef _endpoint_avsc_Union__43__ eventSyncRequest_t;
    typedef _endpoint_avsc_Union__44__ logSyncRequest_t;
    requestId_t requestId;
=======
    _endpoint_avsc_Union__40__();
};

struct SyncRequest {
    typedef _endpoint_avsc_Union__34__ syncRequestMetaData_t;
    typedef _endpoint_avsc_Union__35__ profileSyncRequest_t;
    typedef _endpoint_avsc_Union__36__ configurationSyncRequest_t;
    typedef _endpoint_avsc_Union__37__ notificationSyncRequest_t;
    typedef _endpoint_avsc_Union__38__ userSyncRequest_t;
    typedef _endpoint_avsc_Union__39__ eventSyncRequest_t;
    typedef _endpoint_avsc_Union__40__ logSyncRequest_t;
    int32_t requestId;
>>>>>>> master
    syncRequestMetaData_t syncRequestMetaData;
    profileSyncRequest_t profileSyncRequest;
    configurationSyncRequest_t configurationSyncRequest;
    notificationSyncRequest_t notificationSyncRequest;
    userSyncRequest_t userSyncRequest;
    eventSyncRequest_t eventSyncRequest;
    logSyncRequest_t logSyncRequest;
    SyncRequest() :
        requestId(int32_t()),
        syncRequestMetaData(syncRequestMetaData_t()),
        profileSyncRequest(profileSyncRequest_t()),
        configurationSyncRequest(configurationSyncRequest_t()),
        notificationSyncRequest(notificationSyncRequest_t()),
        userSyncRequest(userSyncRequest_t()),
        eventSyncRequest(eventSyncRequest_t()),
        logSyncRequest(logSyncRequest_t())
        { }
};

<<<<<<< HEAD
struct _endpoint_avsc_Union__45__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    int32_t get_int() const;
    void set_int(const int32_t& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
    _endpoint_avsc_Union__45__();
};

struct _endpoint_avsc_Union__46__ {
=======
struct _endpoint_avsc_Union__41__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    ProfileSyncResponse get_ProfileSyncResponse() const;
    void set_ProfileSyncResponse(const ProfileSyncResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__46__();
};

struct _endpoint_avsc_Union__47__ {
=======
    _endpoint_avsc_Union__41__();
};

struct _endpoint_avsc_Union__42__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    ConfigurationSyncResponse get_ConfigurationSyncResponse() const;
    void set_ConfigurationSyncResponse(const ConfigurationSyncResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__47__();
};

struct _endpoint_avsc_Union__48__ {
=======
    _endpoint_avsc_Union__42__();
};

struct _endpoint_avsc_Union__43__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    NotificationSyncResponse get_NotificationSyncResponse() const;
    void set_NotificationSyncResponse(const NotificationSyncResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__48__();
};

struct _endpoint_avsc_Union__49__ {
=======
    _endpoint_avsc_Union__43__();
};

struct _endpoint_avsc_Union__44__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    UserSyncResponse get_UserSyncResponse() const;
    void set_UserSyncResponse(const UserSyncResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__49__();
};

struct _endpoint_avsc_Union__50__ {
=======
    _endpoint_avsc_Union__44__();
};

struct _endpoint_avsc_Union__45__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    EventSyncResponse get_EventSyncResponse() const;
    void set_EventSyncResponse(const EventSyncResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__50__();
};

struct _endpoint_avsc_Union__51__ {
=======
    _endpoint_avsc_Union__45__();
};

struct _endpoint_avsc_Union__46__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    RedirectSyncResponse get_RedirectSyncResponse() const;
    void set_RedirectSyncResponse(const RedirectSyncResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__51__();
};

struct _endpoint_avsc_Union__52__ {
=======
    _endpoint_avsc_Union__46__();
};

struct _endpoint_avsc_Union__47__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    LogSyncResponse get_LogSyncResponse() const;
    void set_LogSyncResponse(const LogSyncResponse& v);
    bool is_null() const {
        return (idx_ == 1);
    }
    void set_null() {
        idx_ = 1;
        value_ = boost::any();
    }
<<<<<<< HEAD
    _endpoint_avsc_Union__52__();
};

struct SyncResponse {
    typedef _endpoint_avsc_Union__45__ requestId_t;
    typedef _endpoint_avsc_Union__46__ profileSyncResponse_t;
    typedef _endpoint_avsc_Union__47__ configurationSyncResponse_t;
    typedef _endpoint_avsc_Union__48__ notificationSyncResponse_t;
    typedef _endpoint_avsc_Union__49__ userSyncResponse_t;
    typedef _endpoint_avsc_Union__50__ eventSyncResponse_t;
    typedef _endpoint_avsc_Union__51__ redirectSyncResponse_t;
    typedef _endpoint_avsc_Union__52__ logSyncResponse_t;
    requestId_t requestId;
=======
    _endpoint_avsc_Union__47__();
};

struct SyncResponse {
    typedef _endpoint_avsc_Union__41__ profileSyncResponse_t;
    typedef _endpoint_avsc_Union__42__ configurationSyncResponse_t;
    typedef _endpoint_avsc_Union__43__ notificationSyncResponse_t;
    typedef _endpoint_avsc_Union__44__ userSyncResponse_t;
    typedef _endpoint_avsc_Union__45__ eventSyncResponse_t;
    typedef _endpoint_avsc_Union__46__ redirectSyncResponse_t;
    typedef _endpoint_avsc_Union__47__ logSyncResponse_t;
    int32_t requestId;
>>>>>>> master
    SyncResponseResultType status;
    profileSyncResponse_t profileSyncResponse;
    configurationSyncResponse_t configurationSyncResponse;
    notificationSyncResponse_t notificationSyncResponse;
    userSyncResponse_t userSyncResponse;
    eventSyncResponse_t eventSyncResponse;
    redirectSyncResponse_t redirectSyncResponse;
    logSyncResponse_t logSyncResponse;
    SyncResponse() :
        requestId(int32_t()),
        status(SyncResponseResultType()),
        profileSyncResponse(profileSyncResponse_t()),
        configurationSyncResponse(configurationSyncResponse_t()),
        notificationSyncResponse(notificationSyncResponse_t()),
        userSyncResponse(userSyncResponse_t()),
        eventSyncResponse(eventSyncResponse_t()),
        redirectSyncResponse(redirectSyncResponse_t()),
        logSyncResponse(logSyncResponse_t())
        { }
};

struct TopicSubscriptionInfo {
    Topic topicInfo;
    int32_t seqNumber;
    TopicSubscriptionInfo() :
        topicInfo(Topic()),
        seqNumber(int32_t())
        { }
};

<<<<<<< HEAD
struct _endpoint_avsc_Union__53__ {
=======
struct _endpoint_avsc_Union__48__ {
>>>>>>> master
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    EventClassFamilyVersionInfo get_EventClassFamilyVersionInfo() const;
    void set_EventClassFamilyVersionInfo(const EventClassFamilyVersionInfo& v);
    EndpointVersionInfo get_EndpointVersionInfo() const;
    void set_EndpointVersionInfo(const EndpointVersionInfo& v);
    TopicState get_TopicState() const;
    void set_TopicState(const TopicState& v);
    SyncResponseStatus get_SyncResponseStatus() const;
    void set_SyncResponseStatus(const SyncResponseStatus& v);
    NotificationType get_NotificationType() const;
    void set_NotificationType(const NotificationType& v);
    SubscriptionType get_SubscriptionType() const;
    void set_SubscriptionType(const SubscriptionType& v);
    SubscriptionCommandType get_SubscriptionCommandType() const;
    void set_SubscriptionCommandType(const SubscriptionCommandType& v);
    SyncResponseResultType get_SyncResponseResultType() const;
    void set_SyncResponseResultType(const SyncResponseResultType& v);
    LogDeliveryErrorCode get_LogDeliveryErrorCode() const;
    void set_LogDeliveryErrorCode(const LogDeliveryErrorCode& v);
    SubscriptionCommand get_SubscriptionCommand() const;
    void set_SubscriptionCommand(const SubscriptionCommand& v);
    UserAttachRequest get_UserAttachRequest() const;
    void set_UserAttachRequest(const UserAttachRequest& v);
    UserAttachResponse get_UserAttachResponse() const;
    void set_UserAttachResponse(const UserAttachResponse& v);
    UserAttachNotification get_UserAttachNotification() const;
    void set_UserAttachNotification(const UserAttachNotification& v);
    UserDetachNotification get_UserDetachNotification() const;
    void set_UserDetachNotification(const UserDetachNotification& v);
    EndpointAttachRequest get_EndpointAttachRequest() const;
    void set_EndpointAttachRequest(const EndpointAttachRequest& v);
    EndpointAttachResponse get_EndpointAttachResponse() const;
    void set_EndpointAttachResponse(const EndpointAttachResponse& v);
    EndpointDetachRequest get_EndpointDetachRequest() const;
    void set_EndpointDetachRequest(const EndpointDetachRequest& v);
    EndpointDetachResponse get_EndpointDetachResponse() const;
    void set_EndpointDetachResponse(const EndpointDetachResponse& v);
    Event get_Event() const;
    void set_Event(const Event& v);
    EventListenersRequest get_EventListenersRequest() const;
    void set_EventListenersRequest(const EventListenersRequest& v);
    EventListenersResponse get_EventListenersResponse() const;
    void set_EventListenersResponse(const EventListenersResponse& v);
    EventSequenceNumberRequest get_EventSequenceNumberRequest() const;
    void set_EventSequenceNumberRequest(const EventSequenceNumberRequest& v);
    EventSequenceNumberResponse get_EventSequenceNumberResponse() const;
    void set_EventSequenceNumberResponse(const EventSequenceNumberResponse& v);
    Notification get_Notification() const;
    void set_Notification(const Notification& v);
    Topic get_Topic() const;
    void set_Topic(const Topic& v);
    LogEntry get_LogEntry() const;
    void set_LogEntry(const LogEntry& v);
    SyncRequestMetaData get_SyncRequestMetaData() const;
    void set_SyncRequestMetaData(const SyncRequestMetaData& v);
    ProfileSyncRequest get_ProfileSyncRequest() const;
    void set_ProfileSyncRequest(const ProfileSyncRequest& v);
    ConfigurationSyncRequest get_ConfigurationSyncRequest() const;
    void set_ConfigurationSyncRequest(const ConfigurationSyncRequest& v);
    NotificationSyncRequest get_NotificationSyncRequest() const;
    void set_NotificationSyncRequest(const NotificationSyncRequest& v);
    UserSyncRequest get_UserSyncRequest() const;
    void set_UserSyncRequest(const UserSyncRequest& v);
    EventSyncRequest get_EventSyncRequest() const;
    void set_EventSyncRequest(const EventSyncRequest& v);
    LogSyncRequest get_LogSyncRequest() const;
    void set_LogSyncRequest(const LogSyncRequest& v);
    ProfileSyncResponse get_ProfileSyncResponse() const;
    void set_ProfileSyncResponse(const ProfileSyncResponse& v);
    ConfigurationSyncResponse get_ConfigurationSyncResponse() const;
    void set_ConfigurationSyncResponse(const ConfigurationSyncResponse& v);
    NotificationSyncResponse get_NotificationSyncResponse() const;
    void set_NotificationSyncResponse(const NotificationSyncResponse& v);
    UserSyncResponse get_UserSyncResponse() const;
    void set_UserSyncResponse(const UserSyncResponse& v);
    EventSyncResponse get_EventSyncResponse() const;
    void set_EventSyncResponse(const EventSyncResponse& v);
    LogDeliveryStatus get_LogDeliveryStatus() const;
    void set_LogDeliveryStatus(const LogDeliveryStatus& v);
    LogSyncResponse get_LogSyncResponse() const;
    void set_LogSyncResponse(const LogSyncResponse& v);
    RedirectSyncResponse get_RedirectSyncResponse() const;
    void set_RedirectSyncResponse(const RedirectSyncResponse& v);
    SyncRequest get_SyncRequest() const;
    void set_SyncRequest(const SyncRequest& v);
    SyncResponse get_SyncResponse() const;
    void set_SyncResponse(const SyncResponse& v);
    TopicSubscriptionInfo get_TopicSubscriptionInfo() const;
    void set_TopicSubscriptionInfo(const TopicSubscriptionInfo& v);
<<<<<<< HEAD
    _endpoint_avsc_Union__53__();
=======
    _endpoint_avsc_Union__48__();
>>>>>>> master
};

inline
std::vector<EventClassFamilyVersionInfo > _endpoint_avsc_Union__0__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<EventClassFamilyVersionInfo > >(value_);
}

inline
void _endpoint_avsc_Union__0__::set_array(const std::vector<EventClassFamilyVersionInfo >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::string _endpoint_avsc_Union__1__::get_string() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void _endpoint_avsc_Union__1__::set_string(const std::string& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::string _endpoint_avsc_Union__2__::get_string() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void _endpoint_avsc_Union__2__::set_string(const std::string& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::string _endpoint_avsc_Union__3__::get_string() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void _endpoint_avsc_Union__3__::set_string(const std::string& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<std::string > _endpoint_avsc_Union__4__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<std::string > >(value_);
}

inline
void _endpoint_avsc_Union__4__::set_array(const std::vector<std::string >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::string _endpoint_avsc_Union__5__::get_string() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void _endpoint_avsc_Union__5__::set_string(const std::string& v) {
    idx_ = 0;
    value_ = v;
}

inline
int32_t _endpoint_avsc_Union__6__::get_int() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<int32_t >(value_);
}

inline
void _endpoint_avsc_Union__6__::set_int(const int32_t& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<uint8_t> _endpoint_avsc_Union__7__::get_bytes() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<uint8_t> >(value_);
}

inline
void _endpoint_avsc_Union__7__::set_bytes(const std::vector<uint8_t>& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<uint8_t> _endpoint_avsc_Union__8__::get_bytes() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<uint8_t> >(value_);
}

inline
void _endpoint_avsc_Union__8__::set_bytes(const std::vector<uint8_t>& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::string _endpoint_avsc_Union__9__::get_string() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::string >(value_);
}

inline
void _endpoint_avsc_Union__9__::set_string(const std::string& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<uint8_t> _endpoint_avsc_Union__10__::get_bytes() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<uint8_t> >(value_);
}

inline
void _endpoint_avsc_Union__10__::set_bytes(const std::vector<uint8_t>& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<uint8_t> _endpoint_avsc_Union__11__::get_bytes() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<uint8_t> >(value_);
}

inline
void _endpoint_avsc_Union__11__::set_bytes(const std::vector<uint8_t>& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<TopicState > _endpoint_avsc_Union__12__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<TopicState > >(value_);
}

inline
void _endpoint_avsc_Union__12__::set_array(const std::vector<TopicState >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<std::string > _endpoint_avsc_Union__13__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<std::string > >(value_);
}

inline
void _endpoint_avsc_Union__13__::set_array(const std::vector<std::string >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<SubscriptionCommand > _endpoint_avsc_Union__14__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<SubscriptionCommand > >(value_);
}

inline
void _endpoint_avsc_Union__14__::set_array(const std::vector<SubscriptionCommand >& v) {
    idx_ = 0;
    value_ = v;
}

inline
UserAttachRequest _endpoint_avsc_Union__15__::get_UserAttachRequest() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserAttachRequest >(value_);
}

inline
void _endpoint_avsc_Union__15__::set_UserAttachRequest(const UserAttachRequest& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<EndpointAttachRequest > _endpoint_avsc_Union__16__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<EndpointAttachRequest > >(value_);
}

inline
void _endpoint_avsc_Union__16__::set_array(const std::vector<EndpointAttachRequest >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<EndpointDetachRequest > _endpoint_avsc_Union__17__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<EndpointDetachRequest > >(value_);
}

inline
void _endpoint_avsc_Union__17__::set_array(const std::vector<EndpointDetachRequest >& v) {
    idx_ = 0;
    value_ = v;
}

inline
EventSequenceNumberRequest _endpoint_avsc_Union__18__::get_EventSequenceNumberRequest() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSequenceNumberRequest >(value_);
}

inline
void _endpoint_avsc_Union__18__::set_EventSequenceNumberRequest(const EventSequenceNumberRequest& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<EventListenersRequest > _endpoint_avsc_Union__19__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<EventListenersRequest > >(value_);
}

inline
void _endpoint_avsc_Union__19__::set_array(const std::vector<EventListenersRequest >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<Event > _endpoint_avsc_Union__20__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<Event > >(value_);
}

inline
void _endpoint_avsc_Union__20__::set_array(const std::vector<Event >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<LogEntry > _endpoint_avsc_Union__21__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<LogEntry > >(value_);
}

inline
void _endpoint_avsc_Union__21__::set_array(const std::vector<LogEntry >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<uint8_t> _endpoint_avsc_Union__22__::get_bytes() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<uint8_t> >(value_);
}

inline
void _endpoint_avsc_Union__22__::set_bytes(const std::vector<uint8_t>& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<uint8_t> _endpoint_avsc_Union__23__::get_bytes() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<uint8_t> >(value_);
}

inline
void _endpoint_avsc_Union__23__::set_bytes(const std::vector<uint8_t>& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<Notification > _endpoint_avsc_Union__24__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<Notification > >(value_);
}

inline
void _endpoint_avsc_Union__24__::set_array(const std::vector<Notification >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<Topic > _endpoint_avsc_Union__25__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<Topic > >(value_);
}

inline
void _endpoint_avsc_Union__25__::set_array(const std::vector<Topic >& v) {
    idx_ = 0;
    value_ = v;
}

inline
UserAttachResponse _endpoint_avsc_Union__26__::get_UserAttachResponse() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserAttachResponse >(value_);
}

inline
void _endpoint_avsc_Union__26__::set_UserAttachResponse(const UserAttachResponse& v) {
    idx_ = 0;
    value_ = v;
}

inline
UserAttachNotification _endpoint_avsc_Union__27__::get_UserAttachNotification() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserAttachNotification >(value_);
}

inline
void _endpoint_avsc_Union__27__::set_UserAttachNotification(const UserAttachNotification& v) {
    idx_ = 0;
    value_ = v;
}

inline
UserDetachNotification _endpoint_avsc_Union__28__::get_UserDetachNotification() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserDetachNotification >(value_);
}

inline
void _endpoint_avsc_Union__28__::set_UserDetachNotification(const UserDetachNotification& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<EndpointAttachResponse > _endpoint_avsc_Union__29__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<EndpointAttachResponse > >(value_);
}

inline
void _endpoint_avsc_Union__29__::set_array(const std::vector<EndpointAttachResponse >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<EndpointDetachResponse > _endpoint_avsc_Union__30__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<EndpointDetachResponse > >(value_);
}

inline
void _endpoint_avsc_Union__30__::set_array(const std::vector<EndpointDetachResponse >& v) {
    idx_ = 0;
    value_ = v;
}

inline
EventSequenceNumberResponse _endpoint_avsc_Union__31__::get_EventSequenceNumberResponse() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSequenceNumberResponse >(value_);
}

inline
void _endpoint_avsc_Union__31__::set_EventSequenceNumberResponse(const EventSequenceNumberResponse& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<EventListenersResponse > _endpoint_avsc_Union__32__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<EventListenersResponse > >(value_);
}

inline
void _endpoint_avsc_Union__32__::set_array(const std::vector<EventListenersResponse >& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<Event > _endpoint_avsc_Union__33__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<Event > >(value_);
}

inline
void _endpoint_avsc_Union__33__::set_array(const std::vector<Event >& v) {
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
LogDeliveryErrorCode _endpoint_avsc_Union__35__::get_LogDeliveryErrorCode() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogDeliveryErrorCode >(value_);
}

inline
void _endpoint_avsc_Union__35__::set_LogDeliveryErrorCode(const LogDeliveryErrorCode& v) {
    idx_ = 0;
    value_ = v;
}

inline
std::vector<LogDeliveryStatus > _endpoint_avsc_Union__36__::get_array() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<std::vector<LogDeliveryStatus > >(value_);
}

inline
void _endpoint_avsc_Union__36__::set_array(const std::vector<LogDeliveryStatus >& v) {
    idx_ = 0;
    value_ = v;
}

inline
int32_t _endpoint_avsc_Union__37__::get_int() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<int32_t >(value_);
}

inline
void _endpoint_avsc_Union__37__::set_int(const int32_t& v) {
    idx_ = 0;
    value_ = v;
}

inline
SyncRequestMetaData _endpoint_avsc_Union__38__::get_SyncRequestMetaData() const {
=======
SyncRequestMetaData _endpoint_avsc_Union__34__::get_SyncRequestMetaData() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SyncRequestMetaData >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__38__::set_SyncRequestMetaData(const SyncRequestMetaData& v) {
=======
void _endpoint_avsc_Union__34__::set_SyncRequestMetaData(const SyncRequestMetaData& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
ProfileSyncRequest _endpoint_avsc_Union__39__::get_ProfileSyncRequest() const {
=======
ProfileSyncRequest _endpoint_avsc_Union__35__::get_ProfileSyncRequest() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ProfileSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__39__::set_ProfileSyncRequest(const ProfileSyncRequest& v) {
=======
void _endpoint_avsc_Union__35__::set_ProfileSyncRequest(const ProfileSyncRequest& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
ConfigurationSyncRequest _endpoint_avsc_Union__40__::get_ConfigurationSyncRequest() const {
=======
ConfigurationSyncRequest _endpoint_avsc_Union__36__::get_ConfigurationSyncRequest() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ConfigurationSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__40__::set_ConfigurationSyncRequest(const ConfigurationSyncRequest& v) {
=======
void _endpoint_avsc_Union__36__::set_ConfigurationSyncRequest(const ConfigurationSyncRequest& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
NotificationSyncRequest _endpoint_avsc_Union__41__::get_NotificationSyncRequest() const {
=======
NotificationSyncRequest _endpoint_avsc_Union__37__::get_NotificationSyncRequest() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<NotificationSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__41__::set_NotificationSyncRequest(const NotificationSyncRequest& v) {
=======
void _endpoint_avsc_Union__37__::set_NotificationSyncRequest(const NotificationSyncRequest& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
UserSyncRequest _endpoint_avsc_Union__42__::get_UserSyncRequest() const {
=======
UserSyncRequest _endpoint_avsc_Union__38__::get_UserSyncRequest() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__42__::set_UserSyncRequest(const UserSyncRequest& v) {
=======
void _endpoint_avsc_Union__38__::set_UserSyncRequest(const UserSyncRequest& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
EventSyncRequest _endpoint_avsc_Union__43__::get_EventSyncRequest() const {
=======
EventSyncRequest _endpoint_avsc_Union__39__::get_EventSyncRequest() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__43__::set_EventSyncRequest(const EventSyncRequest& v) {
=======
void _endpoint_avsc_Union__39__::set_EventSyncRequest(const EventSyncRequest& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
LogSyncRequest _endpoint_avsc_Union__44__::get_LogSyncRequest() const {
=======
LogSyncRequest _endpoint_avsc_Union__40__::get_LogSyncRequest() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__44__::set_LogSyncRequest(const LogSyncRequest& v) {
    idx_ = 0;
    value_ = v;
}

inline
int32_t _endpoint_avsc_Union__45__::get_int() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<int32_t >(value_);
}

inline
void _endpoint_avsc_Union__45__::set_int(const int32_t& v) {
=======
void _endpoint_avsc_Union__40__::set_LogSyncRequest(const LogSyncRequest& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
ProfileSyncResponse _endpoint_avsc_Union__46__::get_ProfileSyncResponse() const {
=======
ProfileSyncResponse _endpoint_avsc_Union__41__::get_ProfileSyncResponse() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ProfileSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__46__::set_ProfileSyncResponse(const ProfileSyncResponse& v) {
=======
void _endpoint_avsc_Union__41__::set_ProfileSyncResponse(const ProfileSyncResponse& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
ConfigurationSyncResponse _endpoint_avsc_Union__47__::get_ConfigurationSyncResponse() const {
=======
ConfigurationSyncResponse _endpoint_avsc_Union__42__::get_ConfigurationSyncResponse() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ConfigurationSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__47__::set_ConfigurationSyncResponse(const ConfigurationSyncResponse& v) {
=======
void _endpoint_avsc_Union__42__::set_ConfigurationSyncResponse(const ConfigurationSyncResponse& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
NotificationSyncResponse _endpoint_avsc_Union__48__::get_NotificationSyncResponse() const {
=======
NotificationSyncResponse _endpoint_avsc_Union__43__::get_NotificationSyncResponse() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<NotificationSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__48__::set_NotificationSyncResponse(const NotificationSyncResponse& v) {
=======
void _endpoint_avsc_Union__43__::set_NotificationSyncResponse(const NotificationSyncResponse& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
UserSyncResponse _endpoint_avsc_Union__49__::get_UserSyncResponse() const {
=======
UserSyncResponse _endpoint_avsc_Union__44__::get_UserSyncResponse() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__49__::set_UserSyncResponse(const UserSyncResponse& v) {
=======
void _endpoint_avsc_Union__44__::set_UserSyncResponse(const UserSyncResponse& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
EventSyncResponse _endpoint_avsc_Union__50__::get_EventSyncResponse() const {
=======
EventSyncResponse _endpoint_avsc_Union__45__::get_EventSyncResponse() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__50__::set_EventSyncResponse(const EventSyncResponse& v) {
=======
void _endpoint_avsc_Union__45__::set_EventSyncResponse(const EventSyncResponse& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
RedirectSyncResponse _endpoint_avsc_Union__51__::get_RedirectSyncResponse() const {
=======
RedirectSyncResponse _endpoint_avsc_Union__46__::get_RedirectSyncResponse() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<RedirectSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__51__::set_RedirectSyncResponse(const RedirectSyncResponse& v) {
=======
void _endpoint_avsc_Union__46__::set_RedirectSyncResponse(const RedirectSyncResponse& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
LogSyncResponse _endpoint_avsc_Union__52__::get_LogSyncResponse() const {
=======
LogSyncResponse _endpoint_avsc_Union__47__::get_LogSyncResponse() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__52__::set_LogSyncResponse(const LogSyncResponse& v) {
=======
void _endpoint_avsc_Union__47__::set_LogSyncResponse(const LogSyncResponse& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
EventClassFamilyVersionInfo _endpoint_avsc_Union__53__::get_EventClassFamilyVersionInfo() const {
=======
EventClassFamilyVersionInfo _endpoint_avsc_Union__48__::get_EventClassFamilyVersionInfo() const {
>>>>>>> master
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventClassFamilyVersionInfo >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EventClassFamilyVersionInfo(const EventClassFamilyVersionInfo& v) {
=======
void _endpoint_avsc_Union__48__::set_EventClassFamilyVersionInfo(const EventClassFamilyVersionInfo& v) {
>>>>>>> master
    idx_ = 0;
    value_ = v;
}

inline
<<<<<<< HEAD
EndpointVersionInfo _endpoint_avsc_Union__53__::get_EndpointVersionInfo() const {
=======
EndpointVersionInfo _endpoint_avsc_Union__48__::get_EndpointVersionInfo() const {
>>>>>>> master
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EndpointVersionInfo >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EndpointVersionInfo(const EndpointVersionInfo& v) {
=======
void _endpoint_avsc_Union__48__::set_EndpointVersionInfo(const EndpointVersionInfo& v) {
>>>>>>> master
    idx_ = 1;
    value_ = v;
}

inline
<<<<<<< HEAD
TopicState _endpoint_avsc_Union__53__::get_TopicState() const {
=======
TopicState _endpoint_avsc_Union__48__::get_TopicState() const {
>>>>>>> master
    if (idx_ != 2) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<TopicState >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_TopicState(const TopicState& v) {
=======
void _endpoint_avsc_Union__48__::set_TopicState(const TopicState& v) {
>>>>>>> master
    idx_ = 2;
    value_ = v;
}

inline
<<<<<<< HEAD
SyncResponseStatus _endpoint_avsc_Union__53__::get_SyncResponseStatus() const {
=======
SyncResponseStatus _endpoint_avsc_Union__48__::get_SyncResponseStatus() const {
>>>>>>> master
    if (idx_ != 3) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SyncResponseStatus >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_SyncResponseStatus(const SyncResponseStatus& v) {
=======
void _endpoint_avsc_Union__48__::set_SyncResponseStatus(const SyncResponseStatus& v) {
>>>>>>> master
    idx_ = 3;
    value_ = v;
}

inline
<<<<<<< HEAD
NotificationType _endpoint_avsc_Union__53__::get_NotificationType() const {
=======
NotificationType _endpoint_avsc_Union__48__::get_NotificationType() const {
>>>>>>> master
    if (idx_ != 4) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<NotificationType >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_NotificationType(const NotificationType& v) {
=======
void _endpoint_avsc_Union__48__::set_NotificationType(const NotificationType& v) {
>>>>>>> master
    idx_ = 4;
    value_ = v;
}

inline
<<<<<<< HEAD
SubscriptionType _endpoint_avsc_Union__53__::get_SubscriptionType() const {
=======
SubscriptionType _endpoint_avsc_Union__48__::get_SubscriptionType() const {
>>>>>>> master
    if (idx_ != 5) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SubscriptionType >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_SubscriptionType(const SubscriptionType& v) {
=======
void _endpoint_avsc_Union__48__::set_SubscriptionType(const SubscriptionType& v) {
>>>>>>> master
    idx_ = 5;
    value_ = v;
}

inline
<<<<<<< HEAD
SubscriptionCommandType _endpoint_avsc_Union__53__::get_SubscriptionCommandType() const {
=======
SubscriptionCommandType _endpoint_avsc_Union__48__::get_SubscriptionCommandType() const {
>>>>>>> master
    if (idx_ != 6) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SubscriptionCommandType >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_SubscriptionCommandType(const SubscriptionCommandType& v) {
=======
void _endpoint_avsc_Union__48__::set_SubscriptionCommandType(const SubscriptionCommandType& v) {
>>>>>>> master
    idx_ = 6;
    value_ = v;
}

inline
<<<<<<< HEAD
SyncResponseResultType _endpoint_avsc_Union__53__::get_SyncResponseResultType() const {
=======
SyncResponseResultType _endpoint_avsc_Union__48__::get_SyncResponseResultType() const {
>>>>>>> master
    if (idx_ != 7) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SyncResponseResultType >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_SyncResponseResultType(const SyncResponseResultType& v) {
=======
void _endpoint_avsc_Union__48__::set_SyncResponseResultType(const SyncResponseResultType& v) {
>>>>>>> master
    idx_ = 7;
    value_ = v;
}

inline
<<<<<<< HEAD
LogDeliveryErrorCode _endpoint_avsc_Union__53__::get_LogDeliveryErrorCode() const {
=======
SubscriptionCommand _endpoint_avsc_Union__48__::get_SubscriptionCommand() const {
>>>>>>> master
    if (idx_ != 8) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogDeliveryErrorCode >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_LogDeliveryErrorCode(const LogDeliveryErrorCode& v) {
=======
void _endpoint_avsc_Union__48__::set_SubscriptionCommand(const SubscriptionCommand& v) {
>>>>>>> master
    idx_ = 8;
    value_ = v;
}

inline
<<<<<<< HEAD
SubscriptionCommand _endpoint_avsc_Union__53__::get_SubscriptionCommand() const {
=======
UserAttachRequest _endpoint_avsc_Union__48__::get_UserAttachRequest() const {
>>>>>>> master
    if (idx_ != 9) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SubscriptionCommand >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_SubscriptionCommand(const SubscriptionCommand& v) {
=======
void _endpoint_avsc_Union__48__::set_UserAttachRequest(const UserAttachRequest& v) {
>>>>>>> master
    idx_ = 9;
    value_ = v;
}

inline
<<<<<<< HEAD
UserAttachRequest _endpoint_avsc_Union__53__::get_UserAttachRequest() const {
=======
UserAttachResponse _endpoint_avsc_Union__48__::get_UserAttachResponse() const {
>>>>>>> master
    if (idx_ != 10) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserAttachRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_UserAttachRequest(const UserAttachRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_UserAttachResponse(const UserAttachResponse& v) {
>>>>>>> master
    idx_ = 10;
    value_ = v;
}

inline
<<<<<<< HEAD
UserAttachResponse _endpoint_avsc_Union__53__::get_UserAttachResponse() const {
=======
UserAttachNotification _endpoint_avsc_Union__48__::get_UserAttachNotification() const {
>>>>>>> master
    if (idx_ != 11) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserAttachResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_UserAttachResponse(const UserAttachResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_UserAttachNotification(const UserAttachNotification& v) {
>>>>>>> master
    idx_ = 11;
    value_ = v;
}

inline
<<<<<<< HEAD
UserAttachNotification _endpoint_avsc_Union__53__::get_UserAttachNotification() const {
=======
UserDetachNotification _endpoint_avsc_Union__48__::get_UserDetachNotification() const {
>>>>>>> master
    if (idx_ != 12) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserAttachNotification >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_UserAttachNotification(const UserAttachNotification& v) {
=======
void _endpoint_avsc_Union__48__::set_UserDetachNotification(const UserDetachNotification& v) {
>>>>>>> master
    idx_ = 12;
    value_ = v;
}

inline
<<<<<<< HEAD
UserDetachNotification _endpoint_avsc_Union__53__::get_UserDetachNotification() const {
=======
EndpointAttachRequest _endpoint_avsc_Union__48__::get_EndpointAttachRequest() const {
>>>>>>> master
    if (idx_ != 13) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserDetachNotification >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_UserDetachNotification(const UserDetachNotification& v) {
=======
void _endpoint_avsc_Union__48__::set_EndpointAttachRequest(const EndpointAttachRequest& v) {
>>>>>>> master
    idx_ = 13;
    value_ = v;
}

inline
<<<<<<< HEAD
EndpointAttachRequest _endpoint_avsc_Union__53__::get_EndpointAttachRequest() const {
=======
EndpointAttachResponse _endpoint_avsc_Union__48__::get_EndpointAttachResponse() const {
>>>>>>> master
    if (idx_ != 14) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EndpointAttachRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EndpointAttachRequest(const EndpointAttachRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_EndpointAttachResponse(const EndpointAttachResponse& v) {
>>>>>>> master
    idx_ = 14;
    value_ = v;
}

inline
<<<<<<< HEAD
EndpointAttachResponse _endpoint_avsc_Union__53__::get_EndpointAttachResponse() const {
=======
EndpointDetachRequest _endpoint_avsc_Union__48__::get_EndpointDetachRequest() const {
>>>>>>> master
    if (idx_ != 15) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EndpointAttachResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EndpointAttachResponse(const EndpointAttachResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_EndpointDetachRequest(const EndpointDetachRequest& v) {
>>>>>>> master
    idx_ = 15;
    value_ = v;
}

inline
<<<<<<< HEAD
EndpointDetachRequest _endpoint_avsc_Union__53__::get_EndpointDetachRequest() const {
=======
EndpointDetachResponse _endpoint_avsc_Union__48__::get_EndpointDetachResponse() const {
>>>>>>> master
    if (idx_ != 16) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EndpointDetachRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EndpointDetachRequest(const EndpointDetachRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_EndpointDetachResponse(const EndpointDetachResponse& v) {
>>>>>>> master
    idx_ = 16;
    value_ = v;
}

inline
<<<<<<< HEAD
EndpointDetachResponse _endpoint_avsc_Union__53__::get_EndpointDetachResponse() const {
=======
Event _endpoint_avsc_Union__48__::get_Event() const {
>>>>>>> master
    if (idx_ != 17) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EndpointDetachResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EndpointDetachResponse(const EndpointDetachResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_Event(const Event& v) {
>>>>>>> master
    idx_ = 17;
    value_ = v;
}

inline
<<<<<<< HEAD
Event _endpoint_avsc_Union__53__::get_Event() const {
=======
EventListenersRequest _endpoint_avsc_Union__48__::get_EventListenersRequest() const {
>>>>>>> master
    if (idx_ != 18) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Event >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_Event(const Event& v) {
=======
void _endpoint_avsc_Union__48__::set_EventListenersRequest(const EventListenersRequest& v) {
>>>>>>> master
    idx_ = 18;
    value_ = v;
}

inline
<<<<<<< HEAD
EventListenersRequest _endpoint_avsc_Union__53__::get_EventListenersRequest() const {
=======
EventListenersResponse _endpoint_avsc_Union__48__::get_EventListenersResponse() const {
>>>>>>> master
    if (idx_ != 19) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventListenersRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EventListenersRequest(const EventListenersRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_EventListenersResponse(const EventListenersResponse& v) {
>>>>>>> master
    idx_ = 19;
    value_ = v;
}

inline
<<<<<<< HEAD
EventListenersResponse _endpoint_avsc_Union__53__::get_EventListenersResponse() const {
=======
EventSequenceNumberRequest _endpoint_avsc_Union__48__::get_EventSequenceNumberRequest() const {
>>>>>>> master
    if (idx_ != 20) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventListenersResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EventListenersResponse(const EventListenersResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_EventSequenceNumberRequest(const EventSequenceNumberRequest& v) {
>>>>>>> master
    idx_ = 20;
    value_ = v;
}

inline
<<<<<<< HEAD
EventSequenceNumberRequest _endpoint_avsc_Union__53__::get_EventSequenceNumberRequest() const {
=======
EventSequenceNumberResponse _endpoint_avsc_Union__48__::get_EventSequenceNumberResponse() const {
>>>>>>> master
    if (idx_ != 21) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSequenceNumberRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EventSequenceNumberRequest(const EventSequenceNumberRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_EventSequenceNumberResponse(const EventSequenceNumberResponse& v) {
>>>>>>> master
    idx_ = 21;
    value_ = v;
}

inline
<<<<<<< HEAD
EventSequenceNumberResponse _endpoint_avsc_Union__53__::get_EventSequenceNumberResponse() const {
=======
Notification _endpoint_avsc_Union__48__::get_Notification() const {
>>>>>>> master
    if (idx_ != 22) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSequenceNumberResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EventSequenceNumberResponse(const EventSequenceNumberResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_Notification(const Notification& v) {
>>>>>>> master
    idx_ = 22;
    value_ = v;
}

inline
<<<<<<< HEAD
Notification _endpoint_avsc_Union__53__::get_Notification() const {
=======
Topic _endpoint_avsc_Union__48__::get_Topic() const {
>>>>>>> master
    if (idx_ != 23) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Notification >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_Notification(const Notification& v) {
=======
void _endpoint_avsc_Union__48__::set_Topic(const Topic& v) {
>>>>>>> master
    idx_ = 23;
    value_ = v;
}

inline
<<<<<<< HEAD
Topic _endpoint_avsc_Union__53__::get_Topic() const {
=======
LogEntry _endpoint_avsc_Union__48__::get_LogEntry() const {
>>>>>>> master
    if (idx_ != 24) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Topic >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_Topic(const Topic& v) {
=======
void _endpoint_avsc_Union__48__::set_LogEntry(const LogEntry& v) {
>>>>>>> master
    idx_ = 24;
    value_ = v;
}

inline
<<<<<<< HEAD
LogEntry _endpoint_avsc_Union__53__::get_LogEntry() const {
=======
SyncRequestMetaData _endpoint_avsc_Union__48__::get_SyncRequestMetaData() const {
>>>>>>> master
    if (idx_ != 25) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogEntry >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_LogEntry(const LogEntry& v) {
=======
void _endpoint_avsc_Union__48__::set_SyncRequestMetaData(const SyncRequestMetaData& v) {
>>>>>>> master
    idx_ = 25;
    value_ = v;
}

inline
<<<<<<< HEAD
SyncRequestMetaData _endpoint_avsc_Union__53__::get_SyncRequestMetaData() const {
=======
ProfileSyncRequest _endpoint_avsc_Union__48__::get_ProfileSyncRequest() const {
>>>>>>> master
    if (idx_ != 26) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SyncRequestMetaData >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_SyncRequestMetaData(const SyncRequestMetaData& v) {
=======
void _endpoint_avsc_Union__48__::set_ProfileSyncRequest(const ProfileSyncRequest& v) {
>>>>>>> master
    idx_ = 26;
    value_ = v;
}

inline
<<<<<<< HEAD
ProfileSyncRequest _endpoint_avsc_Union__53__::get_ProfileSyncRequest() const {
=======
ConfigurationSyncRequest _endpoint_avsc_Union__48__::get_ConfigurationSyncRequest() const {
>>>>>>> master
    if (idx_ != 27) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ProfileSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_ProfileSyncRequest(const ProfileSyncRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_ConfigurationSyncRequest(const ConfigurationSyncRequest& v) {
>>>>>>> master
    idx_ = 27;
    value_ = v;
}

inline
<<<<<<< HEAD
ConfigurationSyncRequest _endpoint_avsc_Union__53__::get_ConfigurationSyncRequest() const {
=======
NotificationSyncRequest _endpoint_avsc_Union__48__::get_NotificationSyncRequest() const {
>>>>>>> master
    if (idx_ != 28) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ConfigurationSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_ConfigurationSyncRequest(const ConfigurationSyncRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_NotificationSyncRequest(const NotificationSyncRequest& v) {
>>>>>>> master
    idx_ = 28;
    value_ = v;
}

inline
<<<<<<< HEAD
NotificationSyncRequest _endpoint_avsc_Union__53__::get_NotificationSyncRequest() const {
=======
UserSyncRequest _endpoint_avsc_Union__48__::get_UserSyncRequest() const {
>>>>>>> master
    if (idx_ != 29) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<NotificationSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_NotificationSyncRequest(const NotificationSyncRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_UserSyncRequest(const UserSyncRequest& v) {
>>>>>>> master
    idx_ = 29;
    value_ = v;
}

inline
<<<<<<< HEAD
UserSyncRequest _endpoint_avsc_Union__53__::get_UserSyncRequest() const {
=======
EventSyncRequest _endpoint_avsc_Union__48__::get_EventSyncRequest() const {
>>>>>>> master
    if (idx_ != 30) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_UserSyncRequest(const UserSyncRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_EventSyncRequest(const EventSyncRequest& v) {
>>>>>>> master
    idx_ = 30;
    value_ = v;
}

inline
<<<<<<< HEAD
EventSyncRequest _endpoint_avsc_Union__53__::get_EventSyncRequest() const {
=======
LogSyncRequest _endpoint_avsc_Union__48__::get_LogSyncRequest() const {
>>>>>>> master
    if (idx_ != 31) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EventSyncRequest(const EventSyncRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_LogSyncRequest(const LogSyncRequest& v) {
>>>>>>> master
    idx_ = 31;
    value_ = v;
}

inline
<<<<<<< HEAD
LogSyncRequest _endpoint_avsc_Union__53__::get_LogSyncRequest() const {
=======
ProfileSyncResponse _endpoint_avsc_Union__48__::get_ProfileSyncResponse() const {
>>>>>>> master
    if (idx_ != 32) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogSyncRequest >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_LogSyncRequest(const LogSyncRequest& v) {
=======
void _endpoint_avsc_Union__48__::set_ProfileSyncResponse(const ProfileSyncResponse& v) {
>>>>>>> master
    idx_ = 32;
    value_ = v;
}

inline
<<<<<<< HEAD
ProfileSyncResponse _endpoint_avsc_Union__53__::get_ProfileSyncResponse() const {
=======
ConfigurationSyncResponse _endpoint_avsc_Union__48__::get_ConfigurationSyncResponse() const {
>>>>>>> master
    if (idx_ != 33) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ProfileSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_ProfileSyncResponse(const ProfileSyncResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_ConfigurationSyncResponse(const ConfigurationSyncResponse& v) {
>>>>>>> master
    idx_ = 33;
    value_ = v;
}

inline
<<<<<<< HEAD
ConfigurationSyncResponse _endpoint_avsc_Union__53__::get_ConfigurationSyncResponse() const {
=======
NotificationSyncResponse _endpoint_avsc_Union__48__::get_NotificationSyncResponse() const {
>>>>>>> master
    if (idx_ != 34) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<ConfigurationSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_ConfigurationSyncResponse(const ConfigurationSyncResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_NotificationSyncResponse(const NotificationSyncResponse& v) {
>>>>>>> master
    idx_ = 34;
    value_ = v;
}

inline
<<<<<<< HEAD
NotificationSyncResponse _endpoint_avsc_Union__53__::get_NotificationSyncResponse() const {
=======
UserSyncResponse _endpoint_avsc_Union__48__::get_UserSyncResponse() const {
>>>>>>> master
    if (idx_ != 35) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<NotificationSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_NotificationSyncResponse(const NotificationSyncResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_UserSyncResponse(const UserSyncResponse& v) {
>>>>>>> master
    idx_ = 35;
    value_ = v;
}

inline
<<<<<<< HEAD
UserSyncResponse _endpoint_avsc_Union__53__::get_UserSyncResponse() const {
=======
EventSyncResponse _endpoint_avsc_Union__48__::get_EventSyncResponse() const {
>>>>>>> master
    if (idx_ != 36) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<UserSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_UserSyncResponse(const UserSyncResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_EventSyncResponse(const EventSyncResponse& v) {
>>>>>>> master
    idx_ = 36;
    value_ = v;
}

inline
<<<<<<< HEAD
EventSyncResponse _endpoint_avsc_Union__53__::get_EventSyncResponse() const {
=======
LogSyncResponse _endpoint_avsc_Union__48__::get_LogSyncResponse() const {
>>>>>>> master
    if (idx_ != 37) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<EventSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_EventSyncResponse(const EventSyncResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_LogSyncResponse(const LogSyncResponse& v) {
>>>>>>> master
    idx_ = 37;
    value_ = v;
}

inline
<<<<<<< HEAD
LogDeliveryStatus _endpoint_avsc_Union__53__::get_LogDeliveryStatus() const {
=======
RedirectSyncResponse _endpoint_avsc_Union__48__::get_RedirectSyncResponse() const {
>>>>>>> master
    if (idx_ != 38) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogDeliveryStatus >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_LogDeliveryStatus(const LogDeliveryStatus& v) {
=======
void _endpoint_avsc_Union__48__::set_RedirectSyncResponse(const RedirectSyncResponse& v) {
>>>>>>> master
    idx_ = 38;
    value_ = v;
}

inline
<<<<<<< HEAD
LogSyncResponse _endpoint_avsc_Union__53__::get_LogSyncResponse() const {
=======
SyncRequest _endpoint_avsc_Union__48__::get_SyncRequest() const {
>>>>>>> master
    if (idx_ != 39) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<LogSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_LogSyncResponse(const LogSyncResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_SyncRequest(const SyncRequest& v) {
>>>>>>> master
    idx_ = 39;
    value_ = v;
}

inline
<<<<<<< HEAD
RedirectSyncResponse _endpoint_avsc_Union__53__::get_RedirectSyncResponse() const {
=======
SyncResponse _endpoint_avsc_Union__48__::get_SyncResponse() const {
>>>>>>> master
    if (idx_ != 40) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<RedirectSyncResponse >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_RedirectSyncResponse(const RedirectSyncResponse& v) {
=======
void _endpoint_avsc_Union__48__::set_SyncResponse(const SyncResponse& v) {
>>>>>>> master
    idx_ = 40;
    value_ = v;
}

inline
<<<<<<< HEAD
SyncRequest _endpoint_avsc_Union__53__::get_SyncRequest() const {
    if (idx_ != 41) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SyncRequest >(value_);
}

inline
void _endpoint_avsc_Union__53__::set_SyncRequest(const SyncRequest& v) {
    idx_ = 41;
    value_ = v;
}

inline
SyncResponse _endpoint_avsc_Union__53__::get_SyncResponse() const {
    if (idx_ != 42) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<SyncResponse >(value_);
}

inline
void _endpoint_avsc_Union__53__::set_SyncResponse(const SyncResponse& v) {
    idx_ = 42;
    value_ = v;
}

inline
TopicSubscriptionInfo _endpoint_avsc_Union__53__::get_TopicSubscriptionInfo() const {
    if (idx_ != 43) {
        throw avro::Exception("Invalid type for union");
    }
=======
TopicSubscriptionInfo _endpoint_avsc_Union__48__::get_TopicSubscriptionInfo() const {
    if (idx_ != 41) {
        throw avro::Exception("Invalid type for union");
    }
>>>>>>> master
    return boost::any_cast<TopicSubscriptionInfo >(value_);
}

inline
<<<<<<< HEAD
void _endpoint_avsc_Union__53__::set_TopicSubscriptionInfo(const TopicSubscriptionInfo& v) {
    idx_ = 43;
=======
void _endpoint_avsc_Union__48__::set_TopicSubscriptionInfo(const TopicSubscriptionInfo& v) {
    idx_ = 41;
>>>>>>> master
    value_ = v;
}

inline _endpoint_avsc_Union__0__::_endpoint_avsc_Union__0__() : idx_(0), value_(std::vector<EventClassFamilyVersionInfo >()) { }
inline _endpoint_avsc_Union__1__::_endpoint_avsc_Union__1__() : idx_(0), value_(std::string()) { }
inline _endpoint_avsc_Union__2__::_endpoint_avsc_Union__2__() : idx_(0), value_(std::string()) { }
inline _endpoint_avsc_Union__3__::_endpoint_avsc_Union__3__() : idx_(0), value_(std::string()) { }
inline _endpoint_avsc_Union__4__::_endpoint_avsc_Union__4__() : idx_(0), value_(std::vector<std::string >()) { }
inline _endpoint_avsc_Union__5__::_endpoint_avsc_Union__5__() : idx_(0), value_(std::string()) { }
inline _endpoint_avsc_Union__6__::_endpoint_avsc_Union__6__() : idx_(0), value_(int32_t()) { }
inline _endpoint_avsc_Union__7__::_endpoint_avsc_Union__7__() : idx_(0), value_(std::vector<uint8_t>()) { }
inline _endpoint_avsc_Union__8__::_endpoint_avsc_Union__8__() : idx_(0), value_(std::vector<uint8_t>()) { }
inline _endpoint_avsc_Union__9__::_endpoint_avsc_Union__9__() : idx_(0), value_(std::string()) { }
inline _endpoint_avsc_Union__10__::_endpoint_avsc_Union__10__() : idx_(0), value_(std::vector<uint8_t>()) { }
inline _endpoint_avsc_Union__11__::_endpoint_avsc_Union__11__() : idx_(0), value_(std::vector<uint8_t>()) { }
inline _endpoint_avsc_Union__12__::_endpoint_avsc_Union__12__() : idx_(0), value_(std::vector<TopicState >()) { }
inline _endpoint_avsc_Union__13__::_endpoint_avsc_Union__13__() : idx_(0), value_(std::vector<std::string >()) { }
inline _endpoint_avsc_Union__14__::_endpoint_avsc_Union__14__() : idx_(0), value_(std::vector<SubscriptionCommand >()) { }
inline _endpoint_avsc_Union__15__::_endpoint_avsc_Union__15__() : idx_(0), value_(UserAttachRequest()) { }
inline _endpoint_avsc_Union__16__::_endpoint_avsc_Union__16__() : idx_(0), value_(std::vector<EndpointAttachRequest >()) { }
inline _endpoint_avsc_Union__17__::_endpoint_avsc_Union__17__() : idx_(0), value_(std::vector<EndpointDetachRequest >()) { }
inline _endpoint_avsc_Union__18__::_endpoint_avsc_Union__18__() : idx_(0), value_(EventSequenceNumberRequest()) { }
inline _endpoint_avsc_Union__19__::_endpoint_avsc_Union__19__() : idx_(0), value_(std::vector<EventListenersRequest >()) { }
inline _endpoint_avsc_Union__20__::_endpoint_avsc_Union__20__() : idx_(0), value_(std::vector<Event >()) { }
inline _endpoint_avsc_Union__21__::_endpoint_avsc_Union__21__() : idx_(0), value_(std::vector<LogEntry >()) { }
inline _endpoint_avsc_Union__22__::_endpoint_avsc_Union__22__() : idx_(0), value_(std::vector<uint8_t>()) { }
inline _endpoint_avsc_Union__23__::_endpoint_avsc_Union__23__() : idx_(0), value_(std::vector<uint8_t>()) { }
<<<<<<< HEAD
inline _endpoint_avsc_Union__24__::_endpoint_avsc_Union__24__() : idx_(0), value_(std::vector<uint8_t>()) { }
inline _endpoint_avsc_Union__25__::_endpoint_avsc_Union__25__() : idx_(0), value_(std::vector<Notification >()) { }
inline _endpoint_avsc_Union__26__::_endpoint_avsc_Union__26__() : idx_(0), value_(std::vector<Topic >()) { }
inline _endpoint_avsc_Union__27__::_endpoint_avsc_Union__27__() : idx_(0), value_(UserAttachResponse()) { }
inline _endpoint_avsc_Union__28__::_endpoint_avsc_Union__28__() : idx_(0), value_(UserAttachNotification()) { }
inline _endpoint_avsc_Union__29__::_endpoint_avsc_Union__29__() : idx_(0), value_(UserDetachNotification()) { }
inline _endpoint_avsc_Union__30__::_endpoint_avsc_Union__30__() : idx_(0), value_(std::vector<EndpointAttachResponse >()) { }
inline _endpoint_avsc_Union__31__::_endpoint_avsc_Union__31__() : idx_(0), value_(std::vector<EndpointDetachResponse >()) { }
inline _endpoint_avsc_Union__32__::_endpoint_avsc_Union__32__() : idx_(0), value_(EventSequenceNumberResponse()) { }
inline _endpoint_avsc_Union__33__::_endpoint_avsc_Union__33__() : idx_(0), value_(std::vector<EventListenersResponse >()) { }
inline _endpoint_avsc_Union__34__::_endpoint_avsc_Union__34__() : idx_(0), value_(std::vector<Event >()) { }
inline _endpoint_avsc_Union__35__::_endpoint_avsc_Union__35__() : idx_(0), value_(LogDeliveryErrorCode()) { }
inline _endpoint_avsc_Union__36__::_endpoint_avsc_Union__36__() : idx_(0), value_(std::vector<LogDeliveryStatus >()) { }
inline _endpoint_avsc_Union__37__::_endpoint_avsc_Union__37__() : idx_(0), value_(int32_t()) { }
inline _endpoint_avsc_Union__38__::_endpoint_avsc_Union__38__() : idx_(0), value_(SyncRequestMetaData()) { }
inline _endpoint_avsc_Union__39__::_endpoint_avsc_Union__39__() : idx_(0), value_(ProfileSyncRequest()) { }
inline _endpoint_avsc_Union__40__::_endpoint_avsc_Union__40__() : idx_(0), value_(ConfigurationSyncRequest()) { }
inline _endpoint_avsc_Union__41__::_endpoint_avsc_Union__41__() : idx_(0), value_(NotificationSyncRequest()) { }
inline _endpoint_avsc_Union__42__::_endpoint_avsc_Union__42__() : idx_(0), value_(UserSyncRequest()) { }
inline _endpoint_avsc_Union__43__::_endpoint_avsc_Union__43__() : idx_(0), value_(EventSyncRequest()) { }
inline _endpoint_avsc_Union__44__::_endpoint_avsc_Union__44__() : idx_(0), value_(LogSyncRequest()) { }
inline _endpoint_avsc_Union__45__::_endpoint_avsc_Union__45__() : idx_(0), value_(int32_t()) { }
inline _endpoint_avsc_Union__46__::_endpoint_avsc_Union__46__() : idx_(0), value_(ProfileSyncResponse()) { }
inline _endpoint_avsc_Union__47__::_endpoint_avsc_Union__47__() : idx_(0), value_(ConfigurationSyncResponse()) { }
inline _endpoint_avsc_Union__48__::_endpoint_avsc_Union__48__() : idx_(0), value_(NotificationSyncResponse()) { }
inline _endpoint_avsc_Union__49__::_endpoint_avsc_Union__49__() : idx_(0), value_(UserSyncResponse()) { }
inline _endpoint_avsc_Union__50__::_endpoint_avsc_Union__50__() : idx_(0), value_(EventSyncResponse()) { }
inline _endpoint_avsc_Union__51__::_endpoint_avsc_Union__51__() : idx_(0), value_(RedirectSyncResponse()) { }
inline _endpoint_avsc_Union__52__::_endpoint_avsc_Union__52__() : idx_(0), value_(LogSyncResponse()) { }
inline _endpoint_avsc_Union__53__::_endpoint_avsc_Union__53__() : idx_(0), value_(EventClassFamilyVersionInfo()) { }
=======
inline _endpoint_avsc_Union__24__::_endpoint_avsc_Union__24__() : idx_(0), value_(std::vector<Notification >()) { }
inline _endpoint_avsc_Union__25__::_endpoint_avsc_Union__25__() : idx_(0), value_(std::vector<Topic >()) { }
inline _endpoint_avsc_Union__26__::_endpoint_avsc_Union__26__() : idx_(0), value_(UserAttachResponse()) { }
inline _endpoint_avsc_Union__27__::_endpoint_avsc_Union__27__() : idx_(0), value_(UserAttachNotification()) { }
inline _endpoint_avsc_Union__28__::_endpoint_avsc_Union__28__() : idx_(0), value_(UserDetachNotification()) { }
inline _endpoint_avsc_Union__29__::_endpoint_avsc_Union__29__() : idx_(0), value_(std::vector<EndpointAttachResponse >()) { }
inline _endpoint_avsc_Union__30__::_endpoint_avsc_Union__30__() : idx_(0), value_(std::vector<EndpointDetachResponse >()) { }
inline _endpoint_avsc_Union__31__::_endpoint_avsc_Union__31__() : idx_(0), value_(EventSequenceNumberResponse()) { }
inline _endpoint_avsc_Union__32__::_endpoint_avsc_Union__32__() : idx_(0), value_(std::vector<EventListenersResponse >()) { }
inline _endpoint_avsc_Union__33__::_endpoint_avsc_Union__33__() : idx_(0), value_(std::vector<Event >()) { }
inline _endpoint_avsc_Union__34__::_endpoint_avsc_Union__34__() : idx_(0), value_(SyncRequestMetaData()) { }
inline _endpoint_avsc_Union__35__::_endpoint_avsc_Union__35__() : idx_(0), value_(ProfileSyncRequest()) { }
inline _endpoint_avsc_Union__36__::_endpoint_avsc_Union__36__() : idx_(0), value_(ConfigurationSyncRequest()) { }
inline _endpoint_avsc_Union__37__::_endpoint_avsc_Union__37__() : idx_(0), value_(NotificationSyncRequest()) { }
inline _endpoint_avsc_Union__38__::_endpoint_avsc_Union__38__() : idx_(0), value_(UserSyncRequest()) { }
inline _endpoint_avsc_Union__39__::_endpoint_avsc_Union__39__() : idx_(0), value_(EventSyncRequest()) { }
inline _endpoint_avsc_Union__40__::_endpoint_avsc_Union__40__() : idx_(0), value_(LogSyncRequest()) { }
inline _endpoint_avsc_Union__41__::_endpoint_avsc_Union__41__() : idx_(0), value_(ProfileSyncResponse()) { }
inline _endpoint_avsc_Union__42__::_endpoint_avsc_Union__42__() : idx_(0), value_(ConfigurationSyncResponse()) { }
inline _endpoint_avsc_Union__43__::_endpoint_avsc_Union__43__() : idx_(0), value_(NotificationSyncResponse()) { }
inline _endpoint_avsc_Union__44__::_endpoint_avsc_Union__44__() : idx_(0), value_(UserSyncResponse()) { }
inline _endpoint_avsc_Union__45__::_endpoint_avsc_Union__45__() : idx_(0), value_(EventSyncResponse()) { }
inline _endpoint_avsc_Union__46__::_endpoint_avsc_Union__46__() : idx_(0), value_(RedirectSyncResponse()) { }
inline _endpoint_avsc_Union__47__::_endpoint_avsc_Union__47__() : idx_(0), value_(LogSyncResponse()) { }
inline _endpoint_avsc_Union__48__::_endpoint_avsc_Union__48__() : idx_(0), value_(EventClassFamilyVersionInfo()) { }
>>>>>>> master
}
namespace avro {
template<> struct codec_traits<kaa::EventClassFamilyVersionInfo> {
    static void encode(Encoder& e, const kaa::EventClassFamilyVersionInfo& v) {
        avro::encode(e, v.name);
        avro::encode(e, v.version);
    }
    static void decode(Decoder& d, kaa::EventClassFamilyVersionInfo& v) {
        avro::decode(d, v.name);
        avro::decode(d, v.version);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__0__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__0__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__0__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::EventClassFamilyVersionInfo > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::EndpointVersionInfo> {
    static void encode(Encoder& e, const kaa::EndpointVersionInfo& v) {
        avro::encode(e, v.configVersion);
        avro::encode(e, v.profileVersion);
        avro::encode(e, v.systemNfVersion);
        avro::encode(e, v.userNfVersion);
        avro::encode(e, v.eventFamilyVersions);
        avro::encode(e, v.logSchemaVersion);
    }
    static void decode(Decoder& d, kaa::EndpointVersionInfo& v) {
        avro::decode(d, v.configVersion);
        avro::decode(d, v.profileVersion);
        avro::decode(d, v.systemNfVersion);
        avro::decode(d, v.userNfVersion);
        avro::decode(d, v.eventFamilyVersions);
        avro::decode(d, v.logSchemaVersion);
    }
};

template<> struct codec_traits<kaa::TopicState> {
    static void encode(Encoder& e, const kaa::TopicState& v) {
        avro::encode(e, v.topicId);
        avro::encode(e, v.seqNumber);
    }
    static void decode(Decoder& d, kaa::TopicState& v) {
        avro::decode(d, v.topicId);
        avro::decode(d, v.seqNumber);
    }
};

template<> struct codec_traits<kaa::SyncResponseStatus> {
    static void encode(Encoder& e, kaa::SyncResponseStatus v) {
		if (v < kaa::NO_DELTA || v > kaa::RESYNC)
		{
			std::ostringstream error;
			error << "enum value " << v << " is out of bound for kaa::SyncResponseStatus and cannot be encoded";
			throw avro::Exception(error.str());
		}
        e.encodeEnum(v);
    }
    static void decode(Decoder& d, kaa::SyncResponseStatus& v) {
		size_t index = d.decodeEnum();
		if (index < kaa::NO_DELTA || index > kaa::RESYNC)
		{
			std::ostringstream error;
			error << "enum value " << index << " is out of bound for kaa::SyncResponseStatus and cannot be decoded";
			throw avro::Exception(error.str());
		}
        v = static_cast<kaa::SyncResponseStatus>(index);
    }
};

template<> struct codec_traits<kaa::NotificationType> {
    static void encode(Encoder& e, kaa::NotificationType v) {
		if (v < kaa::SYSTEM || v > kaa::CUSTOM)
		{
			std::ostringstream error;
			error << "enum value " << v << " is out of bound for kaa::NotificationType and cannot be encoded";
			throw avro::Exception(error.str());
		}
        e.encodeEnum(v);
    }
    static void decode(Decoder& d, kaa::NotificationType& v) {
		size_t index = d.decodeEnum();
		if (index < kaa::SYSTEM || index > kaa::CUSTOM)
		{
			std::ostringstream error;
			error << "enum value " << index << " is out of bound for kaa::NotificationType and cannot be decoded";
			throw avro::Exception(error.str());
		}
        v = static_cast<kaa::NotificationType>(index);
    }
};

template<> struct codec_traits<kaa::SubscriptionType> {
    static void encode(Encoder& e, kaa::SubscriptionType v) {
		if (v < kaa::MANDATORY || v > kaa::OPTIONAL)
		{
			std::ostringstream error;
			error << "enum value " << v << " is out of bound for kaa::SubscriptionType and cannot be encoded";
			throw avro::Exception(error.str());
		}
        e.encodeEnum(v);
    }
    static void decode(Decoder& d, kaa::SubscriptionType& v) {
		size_t index = d.decodeEnum();
		if (index < kaa::MANDATORY || index > kaa::OPTIONAL)
		{
			std::ostringstream error;
			error << "enum value " << index << " is out of bound for kaa::SubscriptionType and cannot be decoded";
			throw avro::Exception(error.str());
		}
        v = static_cast<kaa::SubscriptionType>(index);
    }
};

template<> struct codec_traits<kaa::SubscriptionCommandType> {
    static void encode(Encoder& e, kaa::SubscriptionCommandType v) {
		if (v < kaa::ADD || v > kaa::REMOVE)
		{
			std::ostringstream error;
			error << "enum value " << v << " is out of bound for kaa::SubscriptionCommandType and cannot be encoded";
			throw avro::Exception(error.str());
		}
        e.encodeEnum(v);
    }
    static void decode(Decoder& d, kaa::SubscriptionCommandType& v) {
		size_t index = d.decodeEnum();
		if (index < kaa::ADD || index > kaa::REMOVE)
		{
			std::ostringstream error;
			error << "enum value " << index << " is out of bound for kaa::SubscriptionCommandType and cannot be decoded";
			throw avro::Exception(error.str());
		}
        v = static_cast<kaa::SubscriptionCommandType>(index);
    }
};

template<> struct codec_traits<kaa::SyncResponseResultType> {
    static void encode(Encoder& e, kaa::SyncResponseResultType v) {
		if (v < kaa::SUCCESS || v > kaa::REDIRECT)
		{
			std::ostringstream error;
			error << "enum value " << v << " is out of bound for kaa::SyncResponseResultType and cannot be encoded";
			throw avro::Exception(error.str());
		}
        e.encodeEnum(v);
    }
    static void decode(Decoder& d, kaa::SyncResponseResultType& v) {
		size_t index = d.decodeEnum();
		if (index < kaa::SUCCESS || index > kaa::REDIRECT)
		{
			std::ostringstream error;
			error << "enum value " << index << " is out of bound for kaa::SyncResponseResultType and cannot be decoded";
			throw avro::Exception(error.str());
		}
        v = static_cast<kaa::SyncResponseResultType>(index);
    }
};

template<> struct codec_traits<kaa::LogDeliveryErrorCode> {
    static void encode(Encoder& e, kaa::LogDeliveryErrorCode v) {
		if (v < kaa::NO_APPENDERS_CONFIGURED || v > kaa::REMOTE_INTERNAL_ERROR)
		{
			std::ostringstream error;
			error << "enum value " << v << " is out of bound for kaa::LogDeliveryErrorCode and cannot be encoded";
			throw avro::Exception(error.str());
		}
        e.encodeEnum(v);
    }
    static void decode(Decoder& d, kaa::LogDeliveryErrorCode& v) {
		size_t index = d.decodeEnum();
		if (index < kaa::NO_APPENDERS_CONFIGURED || index > kaa::REMOTE_INTERNAL_ERROR)
		{
			std::ostringstream error;
			error << "enum value " << index << " is out of bound for kaa::LogDeliveryErrorCode and cannot be decoded";
			throw avro::Exception(error.str());
		}
        v = static_cast<kaa::LogDeliveryErrorCode>(index);
    }
};

template<> struct codec_traits<kaa::SubscriptionCommand> {
    static void encode(Encoder& e, const kaa::SubscriptionCommand& v) {
        avro::encode(e, v.topicId);
        avro::encode(e, v.command);
    }
    static void decode(Decoder& d, kaa::SubscriptionCommand& v) {
        avro::decode(d, v.topicId);
        avro::decode(d, v.command);
    }
};

template<> struct codec_traits<kaa::UserAttachRequest> {
    static void encode(Encoder& e, const kaa::UserAttachRequest& v) {
        avro::encode(e, v.userExternalId);
        avro::encode(e, v.userAccessToken);
    }
    static void decode(Decoder& d, kaa::UserAttachRequest& v) {
        avro::decode(d, v.userExternalId);
        avro::decode(d, v.userAccessToken);
    }
};

template<> struct codec_traits<kaa::UserAttachResponse> {
    static void encode(Encoder& e, const kaa::UserAttachResponse& v) {
        avro::encode(e, v.result);
    }
    static void decode(Decoder& d, kaa::UserAttachResponse& v) {
        avro::decode(d, v.result);
    }
};

template<> struct codec_traits<kaa::UserAttachNotification> {
    static void encode(Encoder& e, const kaa::UserAttachNotification& v) {
        avro::encode(e, v.userExternalId);
        avro::encode(e, v.endpointAccessToken);
    }
    static void decode(Decoder& d, kaa::UserAttachNotification& v) {
        avro::decode(d, v.userExternalId);
        avro::decode(d, v.endpointAccessToken);
    }
};

template<> struct codec_traits<kaa::UserDetachNotification> {
    static void encode(Encoder& e, const kaa::UserDetachNotification& v) {
        avro::encode(e, v.endpointAccessToken);
    }
    static void decode(Decoder& d, kaa::UserDetachNotification& v) {
        avro::decode(d, v.endpointAccessToken);
    }
};

template<> struct codec_traits<kaa::EndpointAttachRequest> {
    static void encode(Encoder& e, const kaa::EndpointAttachRequest& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.endpointAccessToken);
    }
    static void decode(Decoder& d, kaa::EndpointAttachRequest& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.endpointAccessToken);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__1__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__1__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_string());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__1__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::EndpointAttachResponse> {
    static void encode(Encoder& e, const kaa::EndpointAttachResponse& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.endpointKeyHash);
        avro::encode(e, v.result);
    }
    static void decode(Decoder& d, kaa::EndpointAttachResponse& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.endpointKeyHash);
        avro::decode(d, v.result);
    }
};

template<> struct codec_traits<kaa::EndpointDetachRequest> {
    static void encode(Encoder& e, const kaa::EndpointDetachRequest& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.endpointKeyHash);
    }
    static void decode(Decoder& d, kaa::EndpointDetachRequest& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.endpointKeyHash);
    }
};

template<> struct codec_traits<kaa::EndpointDetachResponse> {
    static void encode(Encoder& e, const kaa::EndpointDetachResponse& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.result);
    }
    static void decode(Decoder& d, kaa::EndpointDetachResponse& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.result);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__2__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__2__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_string());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__2__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__3__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__3__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_string());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__3__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::Event> {
    static void encode(Encoder& e, const kaa::Event& v) {
        avro::encode(e, v.seqNum);
        avro::encode(e, v.eventClassFQN);
        avro::encode(e, v.eventData);
        avro::encode(e, v.source);
        avro::encode(e, v.target);
    }
    static void decode(Decoder& d, kaa::Event& v) {
        avro::decode(d, v.seqNum);
        avro::decode(d, v.eventClassFQN);
        avro::decode(d, v.eventData);
        avro::decode(d, v.source);
        avro::decode(d, v.target);
    }
};

template<> struct codec_traits<kaa::EventListenersRequest> {
    static void encode(Encoder& e, const kaa::EventListenersRequest& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.eventClassFQNs);
    }
    static void decode(Decoder& d, kaa::EventListenersRequest& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.eventClassFQNs);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__4__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__4__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__4__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<std::string > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::EventListenersResponse> {
    static void encode(Encoder& e, const kaa::EventListenersResponse& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.listeners);
        avro::encode(e, v.result);
    }
    static void decode(Decoder& d, kaa::EventListenersResponse& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.listeners);
        avro::decode(d, v.result);
    }
};

template<> struct codec_traits<kaa::EventSequenceNumberRequest> {
    static void encode(Encoder& e, const kaa::EventSequenceNumberRequest& v) {
    }
    static void decode(Decoder& d, kaa::EventSequenceNumberRequest& v) {
    }
};

template<> struct codec_traits<kaa::EventSequenceNumberResponse> {
    static void encode(Encoder& e, const kaa::EventSequenceNumberResponse& v) {
        avro::encode(e, v.seqNum);
    }
    static void decode(Decoder& d, kaa::EventSequenceNumberResponse& v) {
        avro::decode(d, v.seqNum);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__5__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__5__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_string());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__5__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__6__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__6__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_int());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__6__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                int32_t vv;
                avro::decode(d, vv);
                v.set_int(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::Notification> {
    static void encode(Encoder& e, const kaa::Notification& v) {
        avro::encode(e, v.topicId);
        avro::encode(e, v.type);
        avro::encode(e, v.uid);
        avro::encode(e, v.seqNumber);
        avro::encode(e, v.body);
    }
    static void decode(Decoder& d, kaa::Notification& v) {
        avro::decode(d, v.topicId);
        avro::decode(d, v.type);
        avro::decode(d, v.uid);
        avro::decode(d, v.seqNumber);
        avro::decode(d, v.body);
    }
};

template<> struct codec_traits<kaa::Topic> {
    static void encode(Encoder& e, const kaa::Topic& v) {
        avro::encode(e, v.id);
        avro::encode(e, v.name);
        avro::encode(e, v.subscriptionType);
    }
    static void decode(Decoder& d, kaa::Topic& v) {
        avro::decode(d, v.id);
        avro::decode(d, v.name);
        avro::decode(d, v.subscriptionType);
    }
};

template<> struct codec_traits<kaa::LogEntry> {
    static void encode(Encoder& e, const kaa::LogEntry& v) {
        avro::encode(e, v.data);
    }
    static void decode(Decoder& d, kaa::LogEntry& v) {
        avro::decode(d, v.data);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__7__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__7__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_bytes());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__7__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<uint8_t> vv;
                avro::decode(d, vv);
                v.set_bytes(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::SyncRequestMetaData> {
    static void encode(Encoder& e, const kaa::SyncRequestMetaData& v) {
        avro::encode(e, v.applicationToken);
        avro::encode(e, v.endpointPublicKeyHash);
        avro::encode(e, v.profileHash);
        avro::encode(e, v.timeout);
    }
    static void decode(Decoder& d, kaa::SyncRequestMetaData& v) {
        avro::decode(d, v.applicationToken);
        avro::decode(d, v.endpointPublicKeyHash);
        avro::decode(d, v.profileHash);
        avro::decode(d, v.timeout);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__8__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__8__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_bytes());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__8__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<uint8_t> vv;
                avro::decode(d, vv);
                v.set_bytes(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__9__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__9__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_string());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__9__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::string vv;
                avro::decode(d, vv);
                v.set_string(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::ProfileSyncRequest> {
    static void encode(Encoder& e, const kaa::ProfileSyncRequest& v) {
        avro::encode(e, v.endpointPublicKey);
        avro::encode(e, v.profileBody);
        avro::encode(e, v.versionInfo);
        avro::encode(e, v.endpointAccessToken);
    }
    static void decode(Decoder& d, kaa::ProfileSyncRequest& v) {
        avro::decode(d, v.endpointPublicKey);
        avro::decode(d, v.profileBody);
        avro::decode(d, v.versionInfo);
        avro::decode(d, v.endpointAccessToken);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__10__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__10__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_bytes());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__10__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<uint8_t> vv;
                avro::decode(d, vv);
                v.set_bytes(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::ConfigurationSyncRequest> {
    static void encode(Encoder& e, const kaa::ConfigurationSyncRequest& v) {
        avro::encode(e, v.appStateSeqNumber);
        avro::encode(e, v.configurationHash);
    }
    static void decode(Decoder& d, kaa::ConfigurationSyncRequest& v) {
        avro::decode(d, v.appStateSeqNumber);
        avro::decode(d, v.configurationHash);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__11__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__11__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_bytes());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__11__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<uint8_t> vv;
                avro::decode(d, vv);
                v.set_bytes(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__12__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__12__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__12__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::TopicState > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__13__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__13__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__13__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<std::string > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__14__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__14__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__14__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::SubscriptionCommand > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::NotificationSyncRequest> {
    static void encode(Encoder& e, const kaa::NotificationSyncRequest& v) {
        avro::encode(e, v.appStateSeqNumber);
        avro::encode(e, v.topicListHash);
        avro::encode(e, v.topicStates);
        avro::encode(e, v.acceptedUnicastNotifications);
        avro::encode(e, v.subscriptionCommands);
    }
    static void decode(Decoder& d, kaa::NotificationSyncRequest& v) {
        avro::decode(d, v.appStateSeqNumber);
        avro::decode(d, v.topicListHash);
        avro::decode(d, v.topicStates);
        avro::decode(d, v.acceptedUnicastNotifications);
        avro::decode(d, v.subscriptionCommands);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__15__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__15__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_UserAttachRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__15__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::UserAttachRequest vv;
                avro::decode(d, vv);
                v.set_UserAttachRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__16__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__16__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__16__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::EndpointAttachRequest > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__17__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__17__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__17__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::EndpointDetachRequest > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::UserSyncRequest> {
    static void encode(Encoder& e, const kaa::UserSyncRequest& v) {
        avro::encode(e, v.userAttachRequest);
        avro::encode(e, v.endpointAttachRequests);
        avro::encode(e, v.endpointDetachRequests);
    }
    static void decode(Decoder& d, kaa::UserSyncRequest& v) {
        avro::decode(d, v.userAttachRequest);
        avro::decode(d, v.endpointAttachRequests);
        avro::decode(d, v.endpointDetachRequests);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__18__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__18__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_EventSequenceNumberRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__18__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::EventSequenceNumberRequest vv;
                avro::decode(d, vv);
                v.set_EventSequenceNumberRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__19__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__19__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__19__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::EventListenersRequest > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__20__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__20__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__20__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::Event > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::EventSyncRequest> {
    static void encode(Encoder& e, const kaa::EventSyncRequest& v) {
        avro::encode(e, v.eventSequenceNumberRequest);
        avro::encode(e, v.eventListenersRequests);
        avro::encode(e, v.events);
    }
    static void decode(Decoder& d, kaa::EventSyncRequest& v) {
        avro::decode(d, v.eventSequenceNumberRequest);
        avro::decode(d, v.eventListenersRequests);
        avro::decode(d, v.events);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__21__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__21__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__21__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::LogEntry > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::LogSyncRequest> {
    static void encode(Encoder& e, const kaa::LogSyncRequest& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.logEntries);
    }
    static void decode(Decoder& d, kaa::LogSyncRequest& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.logEntries);
    }
};

template<> struct codec_traits<kaa::ProfileSyncResponse> {
    static void encode(Encoder& e, const kaa::ProfileSyncResponse& v) {
        avro::encode(e, v.responseStatus);
    }
    static void decode(Decoder& d, kaa::ProfileSyncResponse& v) {
        avro::decode(d, v.responseStatus);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__22__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__22__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_bytes());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__22__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<uint8_t> vv;
                avro::decode(d, vv);
                v.set_bytes(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__23__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__23__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_bytes());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__23__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<uint8_t> vv;
                avro::decode(d, vv);
                v.set_bytes(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::ConfigurationSyncResponse> {
    static void encode(Encoder& e, const kaa::ConfigurationSyncResponse& v) {
        avro::encode(e, v.appStateSeqNumber);
        avro::encode(e, v.responseStatus);
        avro::encode(e, v.confSchemaBody);
        avro::encode(e, v.confDeltaBody);
    }
    static void decode(Decoder& d, kaa::ConfigurationSyncResponse& v) {
        avro::decode(d, v.appStateSeqNumber);
        avro::decode(d, v.responseStatus);
        avro::decode(d, v.confSchemaBody);
        avro::decode(d, v.confDeltaBody);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__24__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__24__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__24__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::Notification > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__25__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__25__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__25__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::Topic > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::NotificationSyncResponse> {
    static void encode(Encoder& e, const kaa::NotificationSyncResponse& v) {
        avro::encode(e, v.appStateSeqNumber);
        avro::encode(e, v.responseStatus);
        avro::encode(e, v.notifications);
        avro::encode(e, v.availableTopics);
    }
    static void decode(Decoder& d, kaa::NotificationSyncResponse& v) {
        avro::decode(d, v.appStateSeqNumber);
        avro::decode(d, v.responseStatus);
        avro::decode(d, v.notifications);
        avro::decode(d, v.availableTopics);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__26__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__26__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_UserAttachResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__26__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::UserAttachResponse vv;
                avro::decode(d, vv);
                v.set_UserAttachResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__27__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__27__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_UserAttachNotification());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__27__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::UserAttachNotification vv;
                avro::decode(d, vv);
                v.set_UserAttachNotification(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__28__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__28__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_UserDetachNotification());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__28__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::UserDetachNotification vv;
                avro::decode(d, vv);
                v.set_UserDetachNotification(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__29__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__29__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__29__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::EndpointAttachResponse > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__30__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__30__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__30__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::EndpointDetachResponse > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::UserSyncResponse> {
    static void encode(Encoder& e, const kaa::UserSyncResponse& v) {
        avro::encode(e, v.userAttachResponse);
        avro::encode(e, v.userAttachNotification);
        avro::encode(e, v.userDetachNotification);
        avro::encode(e, v.endpointAttachResponses);
        avro::encode(e, v.endpointDetachResponses);
    }
    static void decode(Decoder& d, kaa::UserSyncResponse& v) {
        avro::decode(d, v.userAttachResponse);
        avro::decode(d, v.userAttachNotification);
        avro::decode(d, v.userDetachNotification);
        avro::decode(d, v.endpointAttachResponses);
        avro::decode(d, v.endpointDetachResponses);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__31__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__31__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_EventSequenceNumberResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__31__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::EventSequenceNumberResponse vv;
                avro::decode(d, vv);
                v.set_EventSequenceNumberResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__32__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__32__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__32__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::EventListenersResponse > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__33__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__33__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__33__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::Event > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::EventSyncResponse> {
    static void encode(Encoder& e, const kaa::EventSyncResponse& v) {
        avro::encode(e, v.eventSequenceNumberResponse);
        avro::encode(e, v.eventListenersResponses);
        avro::encode(e, v.events);
    }
    static void decode(Decoder& d, kaa::EventSyncResponse& v) {
        avro::decode(d, v.eventSequenceNumberResponse);
        avro::decode(d, v.eventListenersResponses);
        avro::decode(d, v.events);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__35__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__35__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_LogDeliveryErrorCode());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__35__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::LogDeliveryErrorCode vv;
                avro::decode(d, vv);
                v.set_LogDeliveryErrorCode(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::LogDeliveryStatus> {
    static void encode(Encoder& e, const kaa::LogDeliveryStatus& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.result);
        avro::encode(e, v.errorCode);
    }
    static void decode(Decoder& d, kaa::LogDeliveryStatus& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.result);
        avro::decode(d, v.errorCode);
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__36__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__36__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_array());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__36__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                std::vector<kaa::LogDeliveryStatus > vv;
                avro::decode(d, vv);
                v.set_array(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::LogSyncResponse> {
    static void encode(Encoder& e, const kaa::LogSyncResponse& v) {
        avro::encode(e, v.deliveryStatuses);
    }
    static void decode(Decoder& d, kaa::LogSyncResponse& v) {
        avro::decode(d, v.deliveryStatuses);
    }
};

template<> struct codec_traits<kaa::RedirectSyncResponse> {
    static void encode(Encoder& e, const kaa::RedirectSyncResponse& v) {
        avro::encode(e, v.dnsName);
    }
    static void decode(Decoder& d, kaa::RedirectSyncResponse& v) {
        avro::decode(d, v.dnsName);
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__37__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__37__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_int());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__37__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                int32_t vv;
                avro::decode(d, vv);
                v.set_int(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__38__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__38__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__34__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__34__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_SyncRequestMetaData());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__38__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__34__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::SyncRequestMetaData vv;
                avro::decode(d, vv);
                v.set_SyncRequestMetaData(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__39__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__39__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__35__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__35__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_ProfileSyncRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__39__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__35__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::ProfileSyncRequest vv;
                avro::decode(d, vv);
                v.set_ProfileSyncRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__40__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__40__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__36__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__36__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_ConfigurationSyncRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__40__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__36__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::ConfigurationSyncRequest vv;
                avro::decode(d, vv);
                v.set_ConfigurationSyncRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__41__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__41__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__37__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__37__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_NotificationSyncRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__41__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__37__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::NotificationSyncRequest vv;
                avro::decode(d, vv);
                v.set_NotificationSyncRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__42__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__42__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__38__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__38__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_UserSyncRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__42__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__38__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::UserSyncRequest vv;
                avro::decode(d, vv);
                v.set_UserSyncRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__43__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__43__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__39__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__39__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_EventSyncRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__43__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__39__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::EventSyncRequest vv;
                avro::decode(d, vv);
                v.set_EventSyncRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__44__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__44__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__40__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__40__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_LogSyncRequest());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__44__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__40__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::LogSyncRequest vv;
                avro::decode(d, vv);
                v.set_LogSyncRequest(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::SyncRequest> {
    static void encode(Encoder& e, const kaa::SyncRequest& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.syncRequestMetaData);
        avro::encode(e, v.profileSyncRequest);
        avro::encode(e, v.configurationSyncRequest);
        avro::encode(e, v.notificationSyncRequest);
        avro::encode(e, v.userSyncRequest);
        avro::encode(e, v.eventSyncRequest);
        avro::encode(e, v.logSyncRequest);
    }
    static void decode(Decoder& d, kaa::SyncRequest& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.syncRequestMetaData);
        avro::decode(d, v.profileSyncRequest);
        avro::decode(d, v.configurationSyncRequest);
        avro::decode(d, v.notificationSyncRequest);
        avro::decode(d, v.userSyncRequest);
        avro::decode(d, v.eventSyncRequest);
        avro::decode(d, v.logSyncRequest);
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__45__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__45__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_int());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__45__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                int32_t vv;
                avro::decode(d, vv);
                v.set_int(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::_endpoint_avsc_Union__46__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__46__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__41__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__41__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_ProfileSyncResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__46__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__41__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::ProfileSyncResponse vv;
                avro::decode(d, vv);
                v.set_ProfileSyncResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__47__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__47__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__42__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__42__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_ConfigurationSyncResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__47__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__42__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::ConfigurationSyncResponse vv;
                avro::decode(d, vv);
                v.set_ConfigurationSyncResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__48__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__48__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__43__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__43__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_NotificationSyncResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__48__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__43__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::NotificationSyncResponse vv;
                avro::decode(d, vv);
                v.set_NotificationSyncResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__49__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__49__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__44__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__44__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_UserSyncResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__49__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__44__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::UserSyncResponse vv;
                avro::decode(d, vv);
                v.set_UserSyncResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__50__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__50__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__45__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__45__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_EventSyncResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__50__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__45__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::EventSyncResponse vv;
                avro::decode(d, vv);
                v.set_EventSyncResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__51__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__51__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__46__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__46__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_RedirectSyncResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__51__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__46__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::RedirectSyncResponse vv;
                avro::decode(d, vv);
                v.set_RedirectSyncResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__52__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__52__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__47__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__47__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_LogSyncResponse());
            break;
        case 1:
            e.encodeNull();
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__52__& v) {
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__47__& v) {
>>>>>>> master
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                kaa::LogSyncResponse vv;
                avro::decode(d, vv);
                v.set_LogSyncResponse(vv);
            }
            break;
        case 1:
            d.decodeNull();
            v.set_null();
            break;
        }
    }
};

template<> struct codec_traits<kaa::SyncResponse> {
    static void encode(Encoder& e, const kaa::SyncResponse& v) {
        avro::encode(e, v.requestId);
        avro::encode(e, v.status);
        avro::encode(e, v.profileSyncResponse);
        avro::encode(e, v.configurationSyncResponse);
        avro::encode(e, v.notificationSyncResponse);
        avro::encode(e, v.userSyncResponse);
        avro::encode(e, v.eventSyncResponse);
        avro::encode(e, v.redirectSyncResponse);
        avro::encode(e, v.logSyncResponse);
    }
    static void decode(Decoder& d, kaa::SyncResponse& v) {
        avro::decode(d, v.requestId);
        avro::decode(d, v.status);
        avro::decode(d, v.profileSyncResponse);
        avro::decode(d, v.configurationSyncResponse);
        avro::decode(d, v.notificationSyncResponse);
        avro::decode(d, v.userSyncResponse);
        avro::decode(d, v.eventSyncResponse);
        avro::decode(d, v.redirectSyncResponse);
        avro::decode(d, v.logSyncResponse);
    }
};

template<> struct codec_traits<kaa::TopicSubscriptionInfo> {
    static void encode(Encoder& e, const kaa::TopicSubscriptionInfo& v) {
        avro::encode(e, v.topicInfo);
        avro::encode(e, v.seqNumber);
    }
    static void decode(Decoder& d, kaa::TopicSubscriptionInfo& v) {
        avro::decode(d, v.topicInfo);
        avro::decode(d, v.seqNumber);
    }
};

<<<<<<< HEAD
template<> struct codec_traits<kaa::_endpoint_avsc_Union__53__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__53__ v) {
=======
template<> struct codec_traits<kaa::_endpoint_avsc_Union__48__> {
    static void encode(Encoder& e, kaa::_endpoint_avsc_Union__48__ v) {
>>>>>>> master
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_EventClassFamilyVersionInfo());
            break;
        case 1:
            avro::encode(e, v.get_EndpointVersionInfo());
            break;
        case 2:
            avro::encode(e, v.get_TopicState());
            break;
        case 3:
            avro::encode(e, v.get_SyncResponseStatus());
            break;
        case 4:
            avro::encode(e, v.get_NotificationType());
            break;
        case 5:
            avro::encode(e, v.get_SubscriptionType());
            break;
        case 6:
            avro::encode(e, v.get_SubscriptionCommandType());
            break;
        case 7:
            avro::encode(e, v.get_SyncResponseResultType());
            break;
        case 8:
            avro::encode(e, v.get_LogDeliveryErrorCode());
            break;
        case 9:
            avro::encode(e, v.get_SubscriptionCommand());
            break;
        case 10:
            avro::encode(e, v.get_UserAttachRequest());
            break;
        case 11:
            avro::encode(e, v.get_UserAttachResponse());
            break;
        case 12:
            avro::encode(e, v.get_UserAttachNotification());
            break;
        case 13:
            avro::encode(e, v.get_UserDetachNotification());
            break;
        case 14:
            avro::encode(e, v.get_EndpointAttachRequest());
            break;
        case 15:
            avro::encode(e, v.get_EndpointAttachResponse());
            break;
        case 16:
            avro::encode(e, v.get_EndpointDetachRequest());
            break;
        case 17:
            avro::encode(e, v.get_EndpointDetachResponse());
            break;
        case 18:
            avro::encode(e, v.get_Event());
            break;
        case 19:
            avro::encode(e, v.get_EventListenersRequest());
            break;
        case 20:
            avro::encode(e, v.get_EventListenersResponse());
            break;
        case 21:
            avro::encode(e, v.get_EventSequenceNumberRequest());
            break;
        case 22:
            avro::encode(e, v.get_EventSequenceNumberResponse());
            break;
        case 23:
            avro::encode(e, v.get_Notification());
            break;
        case 24:
            avro::encode(e, v.get_Topic());
            break;
        case 25:
            avro::encode(e, v.get_LogEntry());
            break;
        case 26:
            avro::encode(e, v.get_SyncRequestMetaData());
            break;
        case 27:
            avro::encode(e, v.get_ProfileSyncRequest());
            break;
        case 28:
            avro::encode(e, v.get_ConfigurationSyncRequest());
            break;
        case 29:
            avro::encode(e, v.get_NotificationSyncRequest());
            break;
        case 30:
            avro::encode(e, v.get_UserSyncRequest());
            break;
        case 31:
            avro::encode(e, v.get_EventSyncRequest());
            break;
        case 32:
            avro::encode(e, v.get_LogSyncRequest());
            break;
        case 33:
            avro::encode(e, v.get_ProfileSyncResponse());
            break;
        case 34:
            avro::encode(e, v.get_ConfigurationSyncResponse());
            break;
        case 35:
            avro::encode(e, v.get_NotificationSyncResponse());
            break;
        case 36:
            avro::encode(e, v.get_UserSyncResponse());
            break;
        case 37:
            avro::encode(e, v.get_EventSyncResponse());
            break;
        case 38:
            avro::encode(e, v.get_LogDeliveryStatus());
            break;
        case 39:
            avro::encode(e, v.get_LogSyncResponse());
            break;
        case 40:
            avro::encode(e, v.get_RedirectSyncResponse());
            break;
        case 41:
            avro::encode(e, v.get_SyncRequest());
            break;
        case 42:
            avro::encode(e, v.get_SyncResponse());
            break;
<<<<<<< HEAD
        case 43:
=======
        case 41:
>>>>>>> master
            avro::encode(e, v.get_TopicSubscriptionInfo());
            break;
        }
    }
<<<<<<< HEAD
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__53__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 44) { throw avro::Exception("Union index too big"); }
=======
    static void decode(Decoder& d, kaa::_endpoint_avsc_Union__48__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 42) { throw avro::Exception("Union index too big"); }
>>>>>>> master
        switch (n) {
        case 0:
            {
                kaa::EventClassFamilyVersionInfo vv;
                avro::decode(d, vv);
                v.set_EventClassFamilyVersionInfo(vv);
            }
            break;
        case 1:
            {
                kaa::EndpointVersionInfo vv;
                avro::decode(d, vv);
                v.set_EndpointVersionInfo(vv);
            }
            break;
        case 2:
            {
                kaa::TopicState vv;
                avro::decode(d, vv);
                v.set_TopicState(vv);
            }
            break;
        case 3:
            {
                kaa::SyncResponseStatus vv;
                avro::decode(d, vv);
                v.set_SyncResponseStatus(vv);
            }
            break;
        case 4:
            {
                kaa::NotificationType vv;
                avro::decode(d, vv);
                v.set_NotificationType(vv);
            }
            break;
        case 5:
            {
                kaa::SubscriptionType vv;
                avro::decode(d, vv);
                v.set_SubscriptionType(vv);
            }
            break;
        case 6:
            {
                kaa::SubscriptionCommandType vv;
                avro::decode(d, vv);
                v.set_SubscriptionCommandType(vv);
            }
            break;
        case 7:
            {
                kaa::SyncResponseResultType vv;
                avro::decode(d, vv);
                v.set_SyncResponseResultType(vv);
            }
            break;
        case 8:
            {
                kaa::LogDeliveryErrorCode vv;
                avro::decode(d, vv);
                v.set_LogDeliveryErrorCode(vv);
            }
            break;
        case 9:
            {
                kaa::SubscriptionCommand vv;
                avro::decode(d, vv);
                v.set_SubscriptionCommand(vv);
            }
            break;
        case 10:
            {
                kaa::UserAttachRequest vv;
                avro::decode(d, vv);
                v.set_UserAttachRequest(vv);
            }
            break;
        case 11:
            {
                kaa::UserAttachResponse vv;
                avro::decode(d, vv);
                v.set_UserAttachResponse(vv);
            }
            break;
        case 12:
            {
                kaa::UserAttachNotification vv;
                avro::decode(d, vv);
                v.set_UserAttachNotification(vv);
            }
            break;
        case 13:
            {
                kaa::UserDetachNotification vv;
                avro::decode(d, vv);
                v.set_UserDetachNotification(vv);
            }
            break;
        case 14:
            {
                kaa::EndpointAttachRequest vv;
                avro::decode(d, vv);
                v.set_EndpointAttachRequest(vv);
            }
            break;
        case 15:
            {
                kaa::EndpointAttachResponse vv;
                avro::decode(d, vv);
                v.set_EndpointAttachResponse(vv);
            }
            break;
        case 16:
            {
                kaa::EndpointDetachRequest vv;
                avro::decode(d, vv);
                v.set_EndpointDetachRequest(vv);
            }
            break;
        case 17:
            {
                kaa::EndpointDetachResponse vv;
                avro::decode(d, vv);
                v.set_EndpointDetachResponse(vv);
            }
            break;
        case 18:
            {
                kaa::Event vv;
                avro::decode(d, vv);
                v.set_Event(vv);
            }
            break;
        case 19:
            {
                kaa::EventListenersRequest vv;
                avro::decode(d, vv);
                v.set_EventListenersRequest(vv);
            }
            break;
        case 20:
            {
                kaa::EventListenersResponse vv;
                avro::decode(d, vv);
                v.set_EventListenersResponse(vv);
            }
            break;
        case 21:
            {
                kaa::EventSequenceNumberRequest vv;
                avro::decode(d, vv);
                v.set_EventSequenceNumberRequest(vv);
            }
            break;
        case 22:
            {
                kaa::EventSequenceNumberResponse vv;
                avro::decode(d, vv);
                v.set_EventSequenceNumberResponse(vv);
            }
            break;
        case 23:
            {
                kaa::Notification vv;
                avro::decode(d, vv);
                v.set_Notification(vv);
            }
            break;
        case 24:
            {
                kaa::Topic vv;
                avro::decode(d, vv);
                v.set_Topic(vv);
            }
            break;
        case 25:
            {
                kaa::LogEntry vv;
                avro::decode(d, vv);
                v.set_LogEntry(vv);
            }
            break;
        case 26:
            {
                kaa::SyncRequestMetaData vv;
                avro::decode(d, vv);
                v.set_SyncRequestMetaData(vv);
            }
            break;
        case 27:
            {
                kaa::ProfileSyncRequest vv;
                avro::decode(d, vv);
                v.set_ProfileSyncRequest(vv);
            }
            break;
        case 28:
            {
                kaa::ConfigurationSyncRequest vv;
                avro::decode(d, vv);
                v.set_ConfigurationSyncRequest(vv);
            }
            break;
        case 29:
            {
                kaa::NotificationSyncRequest vv;
                avro::decode(d, vv);
                v.set_NotificationSyncRequest(vv);
            }
            break;
        case 30:
            {
                kaa::UserSyncRequest vv;
                avro::decode(d, vv);
                v.set_UserSyncRequest(vv);
            }
            break;
        case 31:
            {
                kaa::EventSyncRequest vv;
                avro::decode(d, vv);
                v.set_EventSyncRequest(vv);
            }
            break;
        case 32:
            {
                kaa::LogSyncRequest vv;
                avro::decode(d, vv);
                v.set_LogSyncRequest(vv);
            }
            break;
        case 33:
            {
                kaa::ProfileSyncResponse vv;
                avro::decode(d, vv);
                v.set_ProfileSyncResponse(vv);
            }
            break;
        case 34:
            {
                kaa::ConfigurationSyncResponse vv;
                avro::decode(d, vv);
                v.set_ConfigurationSyncResponse(vv);
            }
            break;
        case 35:
            {
                kaa::NotificationSyncResponse vv;
                avro::decode(d, vv);
                v.set_NotificationSyncResponse(vv);
            }
            break;
        case 36:
            {
                kaa::UserSyncResponse vv;
                avro::decode(d, vv);
                v.set_UserSyncResponse(vv);
            }
            break;
        case 37:
            {
                kaa::EventSyncResponse vv;
                avro::decode(d, vv);
                v.set_EventSyncResponse(vv);
            }
            break;
        case 38:
            {
                kaa::LogDeliveryStatus vv;
                avro::decode(d, vv);
                v.set_LogDeliveryStatus(vv);
            }
            break;
        case 39:
            {
                kaa::LogSyncResponse vv;
                avro::decode(d, vv);
                v.set_LogSyncResponse(vv);
            }
            break;
        case 40:
            {
                kaa::RedirectSyncResponse vv;
                avro::decode(d, vv);
                v.set_RedirectSyncResponse(vv);
            }
            break;
        case 41:
            {
                kaa::SyncRequest vv;
                avro::decode(d, vv);
                v.set_SyncRequest(vv);
            }
            break;
        case 42:
            {
                kaa::SyncResponse vv;
                avro::decode(d, vv);
                v.set_SyncResponse(vv);
            }
            break;
<<<<<<< HEAD
        case 43:
=======
        case 41:
>>>>>>> master
            {
                kaa::TopicSubscriptionInfo vv;
                avro::decode(d, vv);
                v.set_TopicSubscriptionInfo(vv);
            }
            break;
        }
    }
};

}
#endif