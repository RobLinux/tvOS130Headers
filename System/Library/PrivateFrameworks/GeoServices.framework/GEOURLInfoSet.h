/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOURLInfo, NSURL;

@interface GEOURLInfoSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOURLInfo* _abExperimentURL;
	GEOURLInfo* _addressCorrectionInitURL;
	GEOURLInfo* _addressCorrectionUpdateURL;
	GEOURLInfo* _analyticsCohortSessionURL;
	GEOURLInfo* _analyticsLongSessionURL;
	GEOURLInfo* _analyticsSessionlessURL;
	GEOURLInfo* _analyticsShortSessionURL;
	GEOURLInfo* _announcementsURL;
	GEOURLInfo* _authProxyURL;
	GEOURLInfo* _backgroundDispatcherURL;
	GEOURLInfo* _backgroundRevGeoURL;
	GEOURLInfo* _batchReverseGeocoderURL;
	GEOURLInfo* _batchTrafficProbeURL;
	GEOURLInfo* _bluePOIDispatcherURL;
	GEOURLInfo* _businessPortalBaseURL;
	GEOURLInfo* _directionsURL;
	GEOURLInfo* _dispatcherURL;
	GEOURLInfo* _etaURL;
	GEOURLInfo* _feedbackLookupURL;
	GEOURLInfo* _feedbackSubmissionURL;
	GEOURLInfo* _junctionImageServiceURL;
	GEOURLInfo* _logMessageUsageURL;
	GEOURLInfo* _logMessageUsageV3URL;
	GEOURLInfo* _muninBaseURL;
	GEOURLInfo* _polyLocationShiftURL;
	GEOURLInfo* _proactiveRoutingURL;
	GEOURLInfo* _problemCategoriesURL;
	GEOURLInfo* _problemOptInURL;
	GEOURLInfo* _problemStatusURL;
	GEOURLInfo* _problemSubmissionURL;
	GEOURLInfo* _realtimeTrafficProbeURL;
	GEOURLInfo* _resourcesURL;
	GEOURLInfo* _reverseGeocoderVersionsURL;
	GEOURLInfo* _searchAttributionManifestURL;
	GEOURLInfo* _simpleETAURL;
	GEOURLInfo* _spatialLookupURL;
	GEOURLInfo* _webModuleBaseURL;
	GEOURLInfo* _wifiConnectionQualityProbeURL;
	GEOURLInfo* _wifiQualityTileURL;
	GEOURLInfo* _wifiQualityURL;
	unsigned _dataSet;
	struct {
		unsigned has_dataSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abExperimentURL : 1;
		unsigned read_addressCorrectionInitURL : 1;
		unsigned read_addressCorrectionUpdateURL : 1;
		unsigned read_analyticsCohortSessionURL : 1;
		unsigned read_analyticsLongSessionURL : 1;
		unsigned read_analyticsSessionlessURL : 1;
		unsigned read_analyticsShortSessionURL : 1;
		unsigned read_announcementsURL : 1;
		unsigned read_authProxyURL : 1;
		unsigned read_backgroundDispatcherURL : 1;
		unsigned read_backgroundRevGeoURL : 1;
		unsigned read_batchReverseGeocoderURL : 1;
		unsigned read_batchTrafficProbeURL : 1;
		unsigned read_bluePOIDispatcherURL : 1;
		unsigned read_businessPortalBaseURL : 1;
		unsigned read_directionsURL : 1;
		unsigned read_dispatcherURL : 1;
		unsigned read_etaURL : 1;
		unsigned read_feedbackLookupURL : 1;
		unsigned read_feedbackSubmissionURL : 1;
		unsigned read_junctionImageServiceURL : 1;
		unsigned read_logMessageUsageURL : 1;
		unsigned read_logMessageUsageV3URL : 1;
		unsigned read_muninBaseURL : 1;
		unsigned read_polyLocationShiftURL : 1;
		unsigned read_proactiveRoutingURL : 1;
		unsigned read_problemCategoriesURL : 1;
		unsigned read_problemOptInURL : 1;
		unsigned read_problemStatusURL : 1;
		unsigned read_problemSubmissionURL : 1;
		unsigned read_realtimeTrafficProbeURL : 1;
		unsigned read_resourcesURL : 1;
		unsigned read_reverseGeocoderVersionsURL : 1;
		unsigned read_searchAttributionManifestURL : 1;
		unsigned read_simpleETAURL : 1;
		unsigned read_spatialLookupURL : 1;
		unsigned read_webModuleBaseURL : 1;
		unsigned read_wifiConnectionQualityProbeURL : 1;
		unsigned read_wifiQualityTileURL : 1;
		unsigned read_wifiQualityURL : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_abExperimentURL : 1;
		unsigned wrote_addressCorrectionInitURL : 1;
		unsigned wrote_addressCorrectionUpdateURL : 1;
		unsigned wrote_analyticsCohortSessionURL : 1;
		unsigned wrote_analyticsLongSessionURL : 1;
		unsigned wrote_analyticsSessionlessURL : 1;
		unsigned wrote_analyticsShortSessionURL : 1;
		unsigned wrote_announcementsURL : 1;
		unsigned wrote_authProxyURL : 1;
		unsigned wrote_backgroundDispatcherURL : 1;
		unsigned wrote_backgroundRevGeoURL : 1;
		unsigned wrote_batchReverseGeocoderURL : 1;
		unsigned wrote_batchTrafficProbeURL : 1;
		unsigned wrote_bluePOIDispatcherURL : 1;
		unsigned wrote_businessPortalBaseURL : 1;
		unsigned wrote_directionsURL : 1;
		unsigned wrote_dispatcherURL : 1;
		unsigned wrote_etaURL : 1;
		unsigned wrote_feedbackLookupURL : 1;
		unsigned wrote_feedbackSubmissionURL : 1;
		unsigned wrote_junctionImageServiceURL : 1;
		unsigned wrote_logMessageUsageURL : 1;
		unsigned wrote_logMessageUsageV3URL : 1;
		unsigned wrote_muninBaseURL : 1;
		unsigned wrote_polyLocationShiftURL : 1;
		unsigned wrote_proactiveRoutingURL : 1;
		unsigned wrote_problemCategoriesURL : 1;
		unsigned wrote_problemOptInURL : 1;
		unsigned wrote_problemStatusURL : 1;
		unsigned wrote_problemSubmissionURL : 1;
		unsigned wrote_realtimeTrafficProbeURL : 1;
		unsigned wrote_resourcesURL : 1;
		unsigned wrote_reverseGeocoderVersionsURL : 1;
		unsigned wrote_searchAttributionManifestURL : 1;
		unsigned wrote_simpleETAURL : 1;
		unsigned wrote_spatialLookupURL : 1;
		unsigned wrote_webModuleBaseURL : 1;
		unsigned wrote_wifiConnectionQualityProbeURL : 1;
		unsigned wrote_wifiQualityTileURL : 1;
		unsigned wrote_wifiQualityURL : 1;
		unsigned wrote_dataSet : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSURL * resourcesProxyURL; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet; 
@property (nonatomic,readonly) BOOL hasResourcesURL; 
@property (nonatomic,retain) GEOURLInfo * resourcesURL; 
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURL; 
@property (nonatomic,retain) GEOURLInfo * searchAttributionManifestURL; 
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) GEOURLInfo * directionsURL; 
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) GEOURLInfo * etaURL; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) GEOURLInfo * batchReverseGeocoderURL; 
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) GEOURLInfo * simpleETAURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionInitURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) GEOURLInfo * addressCorrectionUpdateURL; 
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURL; 
@property (nonatomic,retain) GEOURLInfo * polyLocationShiftURL; 
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * problemSubmissionURL; 
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) GEOURLInfo * problemStatusURL; 
@property (nonatomic,readonly) BOOL hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) GEOURLInfo * reverseGeocoderVersionsURL; 
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) GEOURLInfo * problemCategoriesURL; 
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) GEOURLInfo * announcementsURL; 
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * dispatcherURL; 
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) GEOURLInfo * problemOptInURL; 
@property (nonatomic,readonly) BOOL hasAbExperimentURL; 
@property (nonatomic,retain) GEOURLInfo * abExperimentURL; 
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) GEOURLInfo * businessPortalBaseURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) GEOURLInfo * logMessageUsageURL; 
@property (nonatomic,readonly) BOOL hasSpatialLookupURL; 
@property (nonatomic,retain) GEOURLInfo * spatialLookupURL; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbeURL; 
@property (nonatomic,retain) GEOURLInfo * realtimeTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasBatchTrafficProbeURL; 
@property (nonatomic,retain) GEOURLInfo * batchTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasProactiveRoutingURL; 
@property (nonatomic,retain) GEOURLInfo * proactiveRoutingURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageV3URL; 
@property (nonatomic,retain) GEOURLInfo * logMessageUsageV3URL; 
@property (nonatomic,readonly) BOOL hasBackgroundDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * backgroundDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBluePOIDispatcherURL; 
@property (nonatomic,retain) GEOURLInfo * bluePOIDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBackgroundRevGeoURL; 
@property (nonatomic,retain) GEOURLInfo * backgroundRevGeoURL; 
@property (nonatomic,readonly) BOOL hasWifiConnectionQualityProbeURL; 
@property (nonatomic,retain) GEOURLInfo * wifiConnectionQualityProbeURL; 
@property (nonatomic,readonly) BOOL hasMuninBaseURL; 
@property (nonatomic,retain) GEOURLInfo * muninBaseURL; 
@property (nonatomic,readonly) BOOL hasAuthProxyURL; 
@property (nonatomic,retain) GEOURLInfo * authProxyURL; 
@property (nonatomic,readonly) BOOL hasWifiQualityURL; 
@property (nonatomic,retain) GEOURLInfo * wifiQualityURL; 
@property (nonatomic,readonly) BOOL hasFeedbackSubmissionURL; 
@property (nonatomic,retain) GEOURLInfo * feedbackSubmissionURL; 
@property (nonatomic,readonly) BOOL hasFeedbackLookupURL; 
@property (nonatomic,retain) GEOURLInfo * feedbackLookupURL; 
@property (nonatomic,readonly) BOOL hasJunctionImageServiceURL; 
@property (nonatomic,retain) GEOURLInfo * junctionImageServiceURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsCohortSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsCohortSessionURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsLongSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsLongSessionURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsShortSessionURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsShortSessionURL; 
@property (nonatomic,readonly) BOOL hasAnalyticsSessionlessURL; 
@property (nonatomic,retain) GEOURLInfo * analyticsSessionlessURL; 
@property (nonatomic,readonly) BOOL hasWebModuleBaseURL; 
@property (nonatomic,retain) GEOURLInfo * webModuleBaseURL; 
@property (nonatomic,readonly) BOOL hasWifiQualityTileURL; 
@property (nonatomic,retain) GEOURLInfo * wifiQualityTileURL; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned)dataSet;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(void)_readResourcesURL;
-(void)_readSearchAttributionManifestURL;
-(void)_readDirectionsURL;
-(void)_readEtaURL;
-(void)_readBatchReverseGeocoderURL;
-(void)_readSimpleETAURL;
-(void)_readAddressCorrectionInitURL;
-(void)_readAddressCorrectionUpdateURL;
-(void)_readPolyLocationShiftURL;
-(void)_readProblemSubmissionURL;
-(void)_readProblemStatusURL;
-(void)_readReverseGeocoderVersionsURL;
-(void)_readProblemCategoriesURL;
-(void)_readAnnouncementsURL;
-(void)_readDispatcherURL;
-(void)_readProblemOptInURL;
-(void)_readAbExperimentURL;
-(void)_readBusinessPortalBaseURL;
-(void)_readLogMessageUsageURL;
-(void)_readSpatialLookupURL;
-(void)_readRealtimeTrafficProbeURL;
-(void)_readBatchTrafficProbeURL;
-(void)_readProactiveRoutingURL;
-(void)_readLogMessageUsageV3URL;
-(void)_readBackgroundDispatcherURL;
-(void)_readBluePOIDispatcherURL;
-(void)_readBackgroundRevGeoURL;
-(void)_readWifiConnectionQualityProbeURL;
-(void)_readMuninBaseURL;
-(void)_readAuthProxyURL;
-(void)_readWifiQualityURL;
-(void)_readFeedbackSubmissionURL;
-(void)_readFeedbackLookupURL;
-(void)_readJunctionImageServiceURL;
-(void)_readAnalyticsCohortSessionURL;
-(void)_readAnalyticsLongSessionURL;
-(void)_readAnalyticsShortSessionURL;
-(void)_readAnalyticsSessionlessURL;
-(void)_readWebModuleBaseURL;
-(void)_readWifiQualityTileURL;
-(GEOURLInfo *)resourcesURL;
-(GEOURLInfo *)searchAttributionManifestURL;
-(GEOURLInfo *)directionsURL;
-(GEOURLInfo *)etaURL;
-(GEOURLInfo *)batchReverseGeocoderURL;
-(GEOURLInfo *)simpleETAURL;
-(GEOURLInfo *)addressCorrectionInitURL;
-(GEOURLInfo *)addressCorrectionUpdateURL;
-(GEOURLInfo *)polyLocationShiftURL;
-(GEOURLInfo *)problemSubmissionURL;
-(GEOURLInfo *)problemStatusURL;
-(GEOURLInfo *)reverseGeocoderVersionsURL;
-(GEOURLInfo *)problemCategoriesURL;
-(GEOURLInfo *)announcementsURL;
-(GEOURLInfo *)dispatcherURL;
-(GEOURLInfo *)problemOptInURL;
-(GEOURLInfo *)abExperimentURL;
-(GEOURLInfo *)businessPortalBaseURL;
-(GEOURLInfo *)logMessageUsageURL;
-(GEOURLInfo *)spatialLookupURL;
-(GEOURLInfo *)realtimeTrafficProbeURL;
-(GEOURLInfo *)batchTrafficProbeURL;
-(GEOURLInfo *)proactiveRoutingURL;
-(GEOURLInfo *)logMessageUsageV3URL;
-(GEOURLInfo *)backgroundDispatcherURL;
-(GEOURLInfo *)bluePOIDispatcherURL;
-(GEOURLInfo *)backgroundRevGeoURL;
-(GEOURLInfo *)wifiConnectionQualityProbeURL;
-(GEOURLInfo *)muninBaseURL;
-(GEOURLInfo *)authProxyURL;
-(GEOURLInfo *)wifiQualityURL;
-(GEOURLInfo *)feedbackSubmissionURL;
-(GEOURLInfo *)feedbackLookupURL;
-(GEOURLInfo *)junctionImageServiceURL;
-(GEOURLInfo *)analyticsCohortSessionURL;
-(GEOURLInfo *)analyticsLongSessionURL;
-(GEOURLInfo *)analyticsShortSessionURL;
-(GEOURLInfo *)analyticsSessionlessURL;
-(GEOURLInfo *)webModuleBaseURL;
-(GEOURLInfo *)wifiQualityTileURL;
-(void)setResourcesURL:(GEOURLInfo *)arg1 ;
-(void)setSearchAttributionManifestURL:(GEOURLInfo *)arg1 ;
-(void)setDirectionsURL:(GEOURLInfo *)arg1 ;
-(void)setEtaURL:(GEOURLInfo *)arg1 ;
-(void)setBatchReverseGeocoderURL:(GEOURLInfo *)arg1 ;
-(void)setSimpleETAURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionInitURL:(GEOURLInfo *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(GEOURLInfo *)arg1 ;
-(void)setPolyLocationShiftURL:(GEOURLInfo *)arg1 ;
-(void)setProblemSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setProblemStatusURL:(GEOURLInfo *)arg1 ;
-(void)setReverseGeocoderVersionsURL:(GEOURLInfo *)arg1 ;
-(void)setProblemCategoriesURL:(GEOURLInfo *)arg1 ;
-(void)setAnnouncementsURL:(GEOURLInfo *)arg1 ;
-(void)setDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setProblemOptInURL:(GEOURLInfo *)arg1 ;
-(void)setAbExperimentURL:(GEOURLInfo *)arg1 ;
-(void)setBusinessPortalBaseURL:(GEOURLInfo *)arg1 ;
-(void)setLogMessageUsageURL:(GEOURLInfo *)arg1 ;
-(void)setSpatialLookupURL:(GEOURLInfo *)arg1 ;
-(void)setRealtimeTrafficProbeURL:(GEOURLInfo *)arg1 ;
-(void)setBatchTrafficProbeURL:(GEOURLInfo *)arg1 ;
-(void)setProactiveRoutingURL:(GEOURLInfo *)arg1 ;
-(void)setLogMessageUsageV3URL:(GEOURLInfo *)arg1 ;
-(void)setBackgroundDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setBluePOIDispatcherURL:(GEOURLInfo *)arg1 ;
-(void)setBackgroundRevGeoURL:(GEOURLInfo *)arg1 ;
-(void)setWifiConnectionQualityProbeURL:(GEOURLInfo *)arg1 ;
-(void)setMuninBaseURL:(GEOURLInfo *)arg1 ;
-(void)setAuthProxyURL:(GEOURLInfo *)arg1 ;
-(void)setWifiQualityURL:(GEOURLInfo *)arg1 ;
-(void)setFeedbackSubmissionURL:(GEOURLInfo *)arg1 ;
-(void)setFeedbackLookupURL:(GEOURLInfo *)arg1 ;
-(void)setJunctionImageServiceURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsCohortSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsLongSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsShortSessionURL:(GEOURLInfo *)arg1 ;
-(void)setAnalyticsSessionlessURL:(GEOURLInfo *)arg1 ;
-(void)setWebModuleBaseURL:(GEOURLInfo *)arg1 ;
-(void)setWifiQualityTileURL:(GEOURLInfo *)arg1 ;
-(BOOL)hasResourcesURL;
-(BOOL)hasSearchAttributionManifestURL;
-(BOOL)hasDirectionsURL;
-(BOOL)hasEtaURL;
-(BOOL)hasBatchReverseGeocoderURL;
-(BOOL)hasSimpleETAURL;
-(BOOL)hasAddressCorrectionInitURL;
-(BOOL)hasAddressCorrectionUpdateURL;
-(BOOL)hasPolyLocationShiftURL;
-(BOOL)hasProblemSubmissionURL;
-(BOOL)hasProblemStatusURL;
-(BOOL)hasReverseGeocoderVersionsURL;
-(BOOL)hasProblemCategoriesURL;
-(BOOL)hasAnnouncementsURL;
-(BOOL)hasDispatcherURL;
-(BOOL)hasProblemOptInURL;
-(BOOL)hasAbExperimentURL;
-(BOOL)hasBusinessPortalBaseURL;
-(BOOL)hasLogMessageUsageURL;
-(BOOL)hasSpatialLookupURL;
-(BOOL)hasRealtimeTrafficProbeURL;
-(BOOL)hasBatchTrafficProbeURL;
-(BOOL)hasProactiveRoutingURL;
-(BOOL)hasLogMessageUsageV3URL;
-(BOOL)hasBackgroundDispatcherURL;
-(BOOL)hasBluePOIDispatcherURL;
-(BOOL)hasBackgroundRevGeoURL;
-(BOOL)hasWifiConnectionQualityProbeURL;
-(BOOL)hasMuninBaseURL;
-(BOOL)hasAuthProxyURL;
-(BOOL)hasWifiQualityURL;
-(BOOL)hasFeedbackSubmissionURL;
-(BOOL)hasFeedbackLookupURL;
-(BOOL)hasJunctionImageServiceURL;
-(BOOL)hasAnalyticsCohortSessionURL;
-(BOOL)hasAnalyticsLongSessionURL;
-(BOOL)hasAnalyticsShortSessionURL;
-(BOOL)hasAnalyticsSessionlessURL;
-(BOOL)hasWebModuleBaseURL;
-(BOOL)hasWifiQualityTileURL;
-(NSURL *)resourcesProxyURL;
@end

