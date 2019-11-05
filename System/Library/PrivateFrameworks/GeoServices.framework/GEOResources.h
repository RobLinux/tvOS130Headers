/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOVersionManifest;

@interface GEOResources : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _abExperimentURL;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _announcementsSupportedLanguages;
	NSString* _announcementsURL;
	NSMutableArray* _attributions;
	NSString* _authProxyURL;
	NSString* _authToken;
	NSString* _backgroundDispatcherURL;
	NSString* _backgroundRevGeoURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _batchTrafficProbeURL;
	NSString* _bluePOIDispatcherURL;
	NSString* _businessPortalBaseURL;
	NSMutableArray* _dataSetURLOverrides;
	NSMutableArray* _dataSets;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	NSMutableArray* _locationShiftEnabledRegions;
	NSString* _logMessageUsageURL;
	NSString* _logMessageUsageV3URL;
	NSString* _muninBaseURL;
	NSMutableArray* _muninBuckets;
	NSMutableArray* _muninVersions;
	NSString* _polyLocationShiftURL;
	NSString* _proactiveRoutingURL;
	NSString* _problemCategoriesURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSString* _realtimeTrafficProbeURL;
	NSMutableArray* _regionalResources;
	NSString* _releaseInfo;
	NSString* _resourcesURL;
	NSMutableArray* _resources;
	NSString* _reverseGeocoderVersionsURL;
	NSString* _searchAttributionManifestURL;
	NSString* _simpleETAURL;
	NSString* _spatialLookupURL;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileGroups;
	NSMutableArray* _tileSets;
	NSMutableArray* _urlInfoSets;
	GEOVersionManifest* _versionManifest;
	NSString* _wifiConnectionQualityProbeURL;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;
	unsigned _locationShiftVersion;
	struct {
		unsigned has_locationShiftVersion : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abExperimentURL : 1;
		unsigned read_addressCorrectionInitURL : 1;
		unsigned read_addressCorrectionUpdateURL : 1;
		unsigned read_announcementsSupportedLanguages : 1;
		unsigned read_announcementsURL : 1;
		unsigned read_attributions : 1;
		unsigned read_authProxyURL : 1;
		unsigned read_authToken : 1;
		unsigned read_backgroundDispatcherURL : 1;
		unsigned read_backgroundRevGeoURL : 1;
		unsigned read_batchReverseGeocoderURL : 1;
		unsigned read_batchTrafficProbeURL : 1;
		unsigned read_bluePOIDispatcherURL : 1;
		unsigned read_businessPortalBaseURL : 1;
		unsigned read_dataSetURLOverrides : 1;
		unsigned read_dataSets : 1;
		unsigned read_directionsURL : 1;
		unsigned read_dispatcherURL : 1;
		unsigned read_etaURL : 1;
		unsigned read_fontChecksums : 1;
		unsigned read_fonts : 1;
		unsigned read_iconChecksums : 1;
		unsigned read_icons : 1;
		unsigned read_locationShiftEnabledRegions : 1;
		unsigned read_logMessageUsageURL : 1;
		unsigned read_logMessageUsageV3URL : 1;
		unsigned read_muninBaseURL : 1;
		unsigned read_muninBuckets : 1;
		unsigned read_muninVersions : 1;
		unsigned read_polyLocationShiftURL : 1;
		unsigned read_proactiveRoutingURL : 1;
		unsigned read_problemCategoriesURL : 1;
		unsigned read_problemOptInURL : 1;
		unsigned read_problemStatusURL : 1;
		unsigned read_problemSubmissionURL : 1;
		unsigned read_realtimeTrafficProbeURL : 1;
		unsigned read_regionalResources : 1;
		unsigned read_releaseInfo : 1;
		unsigned read_resourcesURL : 1;
		unsigned read_resources : 1;
		unsigned read_reverseGeocoderVersionsURL : 1;
		unsigned read_searchAttributionManifestURL : 1;
		unsigned read_simpleETAURL : 1;
		unsigned read_spatialLookupURL : 1;
		unsigned read_styleSheetChecksums : 1;
		unsigned read_styleSheets : 1;
		unsigned read_textureChecksums : 1;
		unsigned read_textures : 1;
		unsigned read_tileGroups : 1;
		unsigned read_tileSets : 1;
		unsigned read_urlInfoSets : 1;
		unsigned read_versionManifest : 1;
		unsigned read_wifiConnectionQualityProbeURL : 1;
		unsigned read_xmlChecksums : 1;
		unsigned read_xmls : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_abExperimentURL : 1;
		unsigned wrote_addressCorrectionInitURL : 1;
		unsigned wrote_addressCorrectionUpdateURL : 1;
		unsigned wrote_announcementsSupportedLanguages : 1;
		unsigned wrote_announcementsURL : 1;
		unsigned wrote_attributions : 1;
		unsigned wrote_authProxyURL : 1;
		unsigned wrote_authToken : 1;
		unsigned wrote_backgroundDispatcherURL : 1;
		unsigned wrote_backgroundRevGeoURL : 1;
		unsigned wrote_batchReverseGeocoderURL : 1;
		unsigned wrote_batchTrafficProbeURL : 1;
		unsigned wrote_bluePOIDispatcherURL : 1;
		unsigned wrote_businessPortalBaseURL : 1;
		unsigned wrote_dataSetURLOverrides : 1;
		unsigned wrote_dataSets : 1;
		unsigned wrote_directionsURL : 1;
		unsigned wrote_dispatcherURL : 1;
		unsigned wrote_etaURL : 1;
		unsigned wrote_fontChecksums : 1;
		unsigned wrote_fonts : 1;
		unsigned wrote_iconChecksums : 1;
		unsigned wrote_icons : 1;
		unsigned wrote_locationShiftEnabledRegions : 1;
		unsigned wrote_logMessageUsageURL : 1;
		unsigned wrote_logMessageUsageV3URL : 1;
		unsigned wrote_muninBaseURL : 1;
		unsigned wrote_muninBuckets : 1;
		unsigned wrote_muninVersions : 1;
		unsigned wrote_polyLocationShiftURL : 1;
		unsigned wrote_proactiveRoutingURL : 1;
		unsigned wrote_problemCategoriesURL : 1;
		unsigned wrote_problemOptInURL : 1;
		unsigned wrote_problemStatusURL : 1;
		unsigned wrote_problemSubmissionURL : 1;
		unsigned wrote_realtimeTrafficProbeURL : 1;
		unsigned wrote_regionalResources : 1;
		unsigned wrote_releaseInfo : 1;
		unsigned wrote_resourcesURL : 1;
		unsigned wrote_resources : 1;
		unsigned wrote_reverseGeocoderVersionsURL : 1;
		unsigned wrote_searchAttributionManifestURL : 1;
		unsigned wrote_simpleETAURL : 1;
		unsigned wrote_spatialLookupURL : 1;
		unsigned wrote_styleSheetChecksums : 1;
		unsigned wrote_styleSheets : 1;
		unsigned wrote_textureChecksums : 1;
		unsigned wrote_textures : 1;
		unsigned wrote_tileGroups : 1;
		unsigned wrote_tileSets : 1;
		unsigned wrote_urlInfoSets : 1;
		unsigned wrote_versionManifest : 1;
		unsigned wrote_wifiConnectionQualityProbeURL : 1;
		unsigned wrote_xmlChecksums : 1;
		unsigned wrote_xmls : 1;
		unsigned wrote_locationShiftVersion : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * tileGroups; 
@property (nonatomic,retain) NSMutableArray * tileSets; 
@property (nonatomic,retain) NSMutableArray * styleSheets; 
@property (nonatomic,retain) NSMutableArray * textures; 
@property (nonatomic,retain) NSMutableArray * fonts; 
@property (nonatomic,retain) NSMutableArray * icons; 
@property (nonatomic,retain) NSMutableArray * regionalResources; 
@property (nonatomic,retain) NSMutableArray * xmls; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,readonly) BOOL hasAuthToken; 
@property (nonatomic,retain) NSString * authToken; 
@property (nonatomic,readonly) BOOL hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL; 
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL; 
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL; 
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL; 
@property (nonatomic,readonly) BOOL hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo; 
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL; 
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL; 
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums; 
@property (nonatomic,retain) NSMutableArray * textureChecksums; 
@property (nonatomic,retain) NSMutableArray * fontChecksums; 
@property (nonatomic,retain) NSMutableArray * iconChecksums; 
@property (nonatomic,retain) NSMutableArray * xmlChecksums; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL; 
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL; 
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL; 
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL; 
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL; 
@property (nonatomic,readonly) BOOL hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURL; 
@property (nonatomic,readonly) BOOL hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL; 
@property (nonatomic,readonly) BOOL hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL; 
@property (nonatomic,retain) NSMutableArray * announcementsSupportedLanguages; 
@property (nonatomic,readonly) BOOL hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL; 
@property (nonatomic,readonly) BOOL hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL; 
@property (nonatomic,readonly) BOOL hasVersionManifest; 
@property (nonatomic,retain) GEOVersionManifest * versionManifest; 
@property (nonatomic,readonly) BOOL hasAbExperimentURL; 
@property (nonatomic,retain) NSString * abExperimentURL; 
@property (nonatomic,readonly) BOOL hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL; 
@property (nonatomic,retain) NSMutableArray * locationShiftEnabledRegions; 
@property (assign,nonatomic) BOOL hasLocationShiftVersion; 
@property (assign,nonatomic) unsigned locationShiftVersion; 
@property (nonatomic,retain) NSMutableArray * resources; 
@property (nonatomic,readonly) BOOL hasSpatialLookupURL; 
@property (nonatomic,retain) NSString * spatialLookupURL; 
@property (nonatomic,retain) NSMutableArray * dataSets; 
@property (nonatomic,retain) NSMutableArray * dataSetURLOverrides; 
@property (nonatomic,readonly) BOOL hasRealtimeTrafficProbeURL; 
@property (nonatomic,retain) NSString * realtimeTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasBatchTrafficProbeURL; 
@property (nonatomic,retain) NSString * batchTrafficProbeURL; 
@property (nonatomic,readonly) BOOL hasProactiveRoutingURL; 
@property (nonatomic,retain) NSString * proactiveRoutingURL; 
@property (nonatomic,readonly) BOOL hasLogMessageUsageV3URL; 
@property (nonatomic,retain) NSString * logMessageUsageV3URL; 
@property (nonatomic,readonly) BOOL hasBackgroundDispatcherURL; 
@property (nonatomic,retain) NSString * backgroundDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBluePOIDispatcherURL; 
@property (nonatomic,retain) NSString * bluePOIDispatcherURL; 
@property (nonatomic,readonly) BOOL hasBackgroundRevGeoURL; 
@property (nonatomic,retain) NSString * backgroundRevGeoURL; 
@property (nonatomic,readonly) BOOL hasWifiConnectionQualityProbeURL; 
@property (nonatomic,retain) NSString * wifiConnectionQualityProbeURL; 
@property (nonatomic,readonly) BOOL hasMuninBaseURL; 
@property (nonatomic,retain) NSString * muninBaseURL; 
@property (nonatomic,retain) NSMutableArray * muninVersions; 
@property (nonatomic,readonly) BOOL hasAuthProxyURL; 
@property (nonatomic,retain) NSString * authProxyURL; 
@property (nonatomic,retain) NSMutableArray * urlInfoSets; 
@property (nonatomic,retain) NSMutableArray * muninBuckets; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)textureType;
+(BOOL)isValid:(id)arg1 ;
+(Class)attributionType;
+(Class)resourceType;
+(Class)iconType;
+(Class)tileSetType;
+(Class)tileGroupType;
+(Class)styleSheetType;
+(Class)fontType;
+(Class)regionalResourceType;
+(Class)xmlType;
+(Class)styleSheetChecksumType;
+(Class)textureChecksumType;
+(Class)fontChecksumType;
+(Class)iconChecksumType;
+(Class)xmlChecksumType;
+(Class)announcementsSupportedLanguagesType;
+(Class)locationShiftEnabledRegionType;
+(Class)dataSetType;
+(Class)dataSetURLOverrideType;
+(Class)muninVersionType;
+(Class)urlInfoSetType;
+(Class)muninBucketType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)dictionaryRepresentation;
-(NSMutableArray *)icons;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAttributions;
-(void)_addNoFlagsAttribution:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(NSMutableArray *)attributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)_readResources;
-(void)_addNoFlagsResource:(id)arg1 ;
-(unsigned long long)resourcesCount;
-(void)clearResources;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(void)addResource:(id)arg1 ;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(void)addTileSet:(id)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)clearTileSets;
-(id)tileSetAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)tileSets;
-(void)setTileSets:(NSMutableArray *)arg1 ;
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
-(NSString *)resourcesURL;
-(NSString *)searchAttributionManifestURL;
-(NSString *)directionsURL;
-(NSString *)etaURL;
-(NSString *)batchReverseGeocoderURL;
-(NSString *)simpleETAURL;
-(NSString *)addressCorrectionInitURL;
-(NSString *)addressCorrectionUpdateURL;
-(NSString *)polyLocationShiftURL;
-(NSString *)problemSubmissionURL;
-(NSString *)problemStatusURL;
-(NSString *)reverseGeocoderVersionsURL;
-(NSString *)problemCategoriesURL;
-(NSString *)announcementsURL;
-(NSString *)dispatcherURL;
-(NSString *)problemOptInURL;
-(NSString *)abExperimentURL;
-(NSString *)businessPortalBaseURL;
-(NSString *)logMessageUsageURL;
-(NSString *)spatialLookupURL;
-(NSString *)realtimeTrafficProbeURL;
-(NSString *)batchTrafficProbeURL;
-(NSString *)proactiveRoutingURL;
-(NSString *)logMessageUsageV3URL;
-(NSString *)backgroundDispatcherURL;
-(NSString *)bluePOIDispatcherURL;
-(NSString *)backgroundRevGeoURL;
-(NSString *)wifiConnectionQualityProbeURL;
-(NSString *)muninBaseURL;
-(NSString *)authProxyURL;
-(void)setResourcesURL:(NSString *)arg1 ;
-(void)setSearchAttributionManifestURL:(NSString *)arg1 ;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(void)setEtaURL:(NSString *)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(void)setPolyLocationShiftURL:(NSString *)arg1 ;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(void)setReverseGeocoderVersionsURL:(NSString *)arg1 ;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(void)setAbExperimentURL:(NSString *)arg1 ;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(void)setSpatialLookupURL:(NSString *)arg1 ;
-(void)setRealtimeTrafficProbeURL:(NSString *)arg1 ;
-(void)setBatchTrafficProbeURL:(NSString *)arg1 ;
-(void)setProactiveRoutingURL:(NSString *)arg1 ;
-(void)setLogMessageUsageV3URL:(NSString *)arg1 ;
-(void)setBackgroundDispatcherURL:(NSString *)arg1 ;
-(void)setBluePOIDispatcherURL:(NSString *)arg1 ;
-(void)setBackgroundRevGeoURL:(NSString *)arg1 ;
-(void)setWifiConnectionQualityProbeURL:(NSString *)arg1 ;
-(void)setMuninBaseURL:(NSString *)arg1 ;
-(void)setAuthProxyURL:(NSString *)arg1 ;
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
-(unsigned)locationShiftVersion;
-(NSMutableArray *)locationShiftEnabledRegions;
-(id)preferedURLSetFor:(id)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(BOOL)hasAuthToken;
-(void)_readTileGroups;
-(void)_addNoFlagsTileGroup:(id)arg1 ;
-(void)_readTileSets;
-(void)_addNoFlagsTileSet:(id)arg1 ;
-(void)_readStyleSheets;
-(void)_addNoFlagsStyleSheet:(id)arg1 ;
-(void)_readTextures;
-(void)_addNoFlagsTexture:(id)arg1 ;
-(void)_readFonts;
-(void)_addNoFlagsFont:(id)arg1 ;
-(void)_readIcons;
-(void)_addNoFlagsIcon:(id)arg1 ;
-(void)_readRegionalResources;
-(void)_addNoFlagsRegionalResource:(id)arg1 ;
-(void)_readXmls;
-(void)_addNoFlagsXml:(id)arg1 ;
-(void)_readAuthToken;
-(void)_readReleaseInfo;
-(void)_readStyleSheetChecksums;
-(void)_addNoFlagsStyleSheetChecksum:(id)arg1 ;
-(void)_readTextureChecksums;
-(void)_addNoFlagsTextureChecksum:(id)arg1 ;
-(void)_readFontChecksums;
-(void)_addNoFlagsFontChecksum:(id)arg1 ;
-(void)_readIconChecksums;
-(void)_addNoFlagsIconChecksum:(id)arg1 ;
-(void)_readXmlChecksums;
-(void)_addNoFlagsXmlChecksum:(id)arg1 ;
-(void)_readAnnouncementsSupportedLanguages;
-(void)_addNoFlagsAnnouncementsSupportedLanguages:(id)arg1 ;
-(void)_readVersionManifest;
-(void)_readLocationShiftEnabledRegions;
-(void)_addNoFlagsLocationShiftEnabledRegion:(id)arg1 ;
-(void)_readDataSets;
-(void)_addNoFlagsDataSet:(id)arg1 ;
-(void)_readDataSetURLOverrides;
-(void)_addNoFlagsDataSetURLOverride:(id)arg1 ;
-(void)_readMuninVersions;
-(void)_addNoFlagsMuninVersion:(id)arg1 ;
-(void)_readUrlInfoSets;
-(void)_addNoFlagsUrlInfoSet:(id)arg1 ;
-(void)_readMuninBuckets;
-(void)_addNoFlagsMuninBucket:(id)arg1 ;
-(NSMutableArray *)styleSheets;
-(NSMutableArray *)textures;
-(NSMutableArray *)fonts;
-(NSMutableArray *)xmls;
-(NSString *)releaseInfo;
-(NSMutableArray *)styleSheetChecksums;
-(NSMutableArray *)textureChecksums;
-(NSMutableArray *)fontChecksums;
-(NSMutableArray *)iconChecksums;
-(NSMutableArray *)xmlChecksums;
-(NSMutableArray *)announcementsSupportedLanguages;
-(GEOVersionManifest *)versionManifest;
-(unsigned long long)tileGroupsCount;
-(void)clearTileGroups;
-(id)tileGroupAtIndex:(unsigned long long)arg1 ;
-(void)addTileGroup:(id)arg1 ;
-(unsigned long long)styleSheetsCount;
-(void)clearStyleSheets;
-(id)styleSheetAtIndex:(unsigned long long)arg1 ;
-(void)addStyleSheet:(id)arg1 ;
-(unsigned long long)texturesCount;
-(void)clearTextures;
-(id)textureAtIndex:(unsigned long long)arg1 ;
-(void)addTexture:(id)arg1 ;
-(unsigned long long)fontsCount;
-(void)clearFonts;
-(id)fontAtIndex:(unsigned long long)arg1 ;
-(void)addFont:(id)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(void)addIcon:(id)arg1 ;
-(unsigned long long)regionalResourcesCount;
-(void)clearRegionalResources;
-(id)regionalResourceAtIndex:(unsigned long long)arg1 ;
-(void)addRegionalResource:(id)arg1 ;
-(unsigned long long)xmlsCount;
-(void)clearXmls;
-(id)xmlAtIndex:(unsigned long long)arg1 ;
-(void)addXml:(id)arg1 ;
-(void)setReleaseInfo:(NSString *)arg1 ;
-(unsigned long long)styleSheetChecksumsCount;
-(void)clearStyleSheetChecksums;
-(id)styleSheetChecksumAtIndex:(unsigned long long)arg1 ;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(unsigned long long)textureChecksumsCount;
-(void)clearTextureChecksums;
-(id)textureChecksumAtIndex:(unsigned long long)arg1 ;
-(void)addTextureChecksum:(id)arg1 ;
-(unsigned long long)fontChecksumsCount;
-(void)clearFontChecksums;
-(id)fontChecksumAtIndex:(unsigned long long)arg1 ;
-(void)addFontChecksum:(id)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(unsigned long long)xmlChecksumsCount;
-(void)clearXmlChecksums;
-(id)xmlChecksumAtIndex:(unsigned long long)arg1 ;
-(void)addXmlChecksum:(id)arg1 ;
-(unsigned long long)announcementsSupportedLanguagesCount;
-(void)clearAnnouncementsSupportedLanguages;
-(id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)addAnnouncementsSupportedLanguages:(id)arg1 ;
-(void)setVersionManifest:(GEOVersionManifest *)arg1 ;
-(unsigned long long)locationShiftEnabledRegionsCount;
-(void)clearLocationShiftEnabledRegions;
-(id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1 ;
-(void)addLocationShiftEnabledRegion:(id)arg1 ;
-(unsigned long long)dataSetsCount;
-(void)clearDataSets;
-(id)dataSetAtIndex:(unsigned long long)arg1 ;
-(void)addDataSet:(id)arg1 ;
-(unsigned long long)dataSetURLOverridesCount;
-(void)clearDataSetURLOverrides;
-(id)dataSetURLOverrideAtIndex:(unsigned long long)arg1 ;
-(void)addDataSetURLOverride:(id)arg1 ;
-(unsigned long long)muninVersionsCount;
-(void)clearMuninVersions;
-(id)muninVersionAtIndex:(unsigned long long)arg1 ;
-(void)addMuninVersion:(id)arg1 ;
-(unsigned long long)urlInfoSetsCount;
-(void)clearUrlInfoSets;
-(id)urlInfoSetAtIndex:(unsigned long long)arg1 ;
-(void)addUrlInfoSet:(id)arg1 ;
-(unsigned long long)muninBucketsCount;
-(void)clearMuninBuckets;
-(id)muninBucketAtIndex:(unsigned long long)arg1 ;
-(void)addMuninBucket:(id)arg1 ;
-(NSMutableArray *)tileGroups;
-(NSMutableArray *)regionalResources;
-(NSMutableArray *)dataSets;
-(NSMutableArray *)dataSetURLOverrides;
-(NSMutableArray *)muninVersions;
-(NSMutableArray *)urlInfoSets;
-(NSMutableArray *)muninBuckets;
-(void)setTileGroups:(NSMutableArray *)arg1 ;
-(void)setStyleSheets:(NSMutableArray *)arg1 ;
-(void)setTextures:(NSMutableArray *)arg1 ;
-(void)setFonts:(NSMutableArray *)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(void)setRegionalResources:(NSMutableArray *)arg1 ;
-(void)setXmls:(NSMutableArray *)arg1 ;
-(BOOL)hasReleaseInfo;
-(void)setStyleSheetChecksums:(NSMutableArray *)arg1 ;
-(void)setTextureChecksums:(NSMutableArray *)arg1 ;
-(void)setFontChecksums:(NSMutableArray *)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)setXmlChecksums:(NSMutableArray *)arg1 ;
-(void)setAnnouncementsSupportedLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasVersionManifest;
-(void)setLocationShiftEnabledRegions:(NSMutableArray *)arg1 ;
-(void)setLocationShiftVersion:(unsigned)arg1 ;
-(void)setHasLocationShiftVersion:(BOOL)arg1 ;
-(BOOL)hasLocationShiftVersion;
-(void)setDataSets:(NSMutableArray *)arg1 ;
-(void)setDataSetURLOverrides:(NSMutableArray *)arg1 ;
-(void)setMuninVersions:(NSMutableArray *)arg1 ;
-(void)setUrlInfoSets:(NSMutableArray *)arg1 ;
-(void)setMuninBuckets:(NSMutableArray *)arg1 ;
-(id)preferredDataSetForMapsABClient;
-(void)convertFromLegacyFormat;
-(id)preferredDataSetForClientDatasetMetadata:(id)arg1 ;
@end

