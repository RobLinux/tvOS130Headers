/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Intents/_INPBSearchForPhotosIntent.h>
@class _INPBActivityList, _INPBString, _INPBContactList, _INPBDateTimeRange, _INPBEventList, _INPBGeographicalFeatureList, _INPBIntentMetadata, _INPBDataStringList, _INPBStringList, _INPBLocation, _INPBPlaceList;


@protocol _INPBSearchForPhotosIntent <NSObject>
@property (nonatomic,retain) _INPBActivityList * activities; 
@property (nonatomic,readonly) BOOL hasActivities; 
@property (nonatomic,retain) _INPBString * albumName; 
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) _INPBContactList * contentPerson; 
@property (nonatomic,readonly) BOOL hasContentPerson; 
@property (nonatomic,retain) _INPBDateTimeRange * dateCreated; 
@property (nonatomic,readonly) BOOL hasDateCreated; 
@property (nonatomic,retain) _INPBEventList * events; 
@property (nonatomic,readonly) BOOL hasEvents; 
@property (nonatomic,readonly) int* excludedAttributes; 
@property (nonatomic,readonly) unsigned long long excludedAttributesCount; 
@property (nonatomic,retain) _INPBGeographicalFeatureList * geographicalFeatures; 
@property (nonatomic,readonly) BOOL hasGeographicalFeatures; 
@property (nonatomic,readonly) int* includedAttributes; 
@property (nonatomic,readonly) unsigned long long includedAttributesCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata; 
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataStringList * keyword; 
@property (nonatomic,readonly) BOOL hasKeyword; 
@property (nonatomic,retain) _INPBStringList * keywordString; 
@property (nonatomic,readonly) BOOL hasKeywordString; 
@property (nonatomic,retain) _INPBLocation * locationCreated; 
@property (nonatomic,readonly) BOOL hasLocationCreated; 
@property (nonatomic,retain) _INPBString * memoryName; 
@property (nonatomic,readonly) BOOL hasMemoryName; 
@property (nonatomic,retain) _INPBContactList * peopleInPhoto; 
@property (nonatomic,readonly) BOOL hasPeopleInPhoto; 
@property (nonatomic,retain) _INPBPlaceList * places; 
@property (nonatomic,readonly) BOOL hasPlaces; 
@property (nonatomic,retain) _INPBStringList * searchTerm; 
@property (nonatomic,readonly) BOOL hasSearchTerm; 
@required
-(_INPBActivityList *)activities;
-(void)setKeyword:(id)arg1;
-(BOOL)hasKeyword;
-(_INPBDataStringList *)keyword;
-(void)setPlaces:(id)arg1;
-(_INPBPlaceList *)places;
-(void)setActivities:(id)arg1;
-(_INPBEventList *)events;
-(void)setEvents:(id)arg1;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(id)arg1;
-(BOOL)hasIntentMetadata;
-(_INPBString *)albumName;
-(void)setAlbumName:(id)arg1;
-(BOOL)hasAlbumName;
-(_INPBLocation *)locationCreated;
-(void)setLocationCreated:(id)arg1;
-(BOOL)hasLocationCreated;
-(_INPBDateTimeRange *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(BOOL)hasDateCreated;
-(int*)includedAttributes;
-(int*)excludedAttributes;
-(_INPBContactList *)peopleInPhoto;
-(void)setPeopleInPhoto:(id)arg1;
-(_INPBStringList *)searchTerm;
-(void)setSearchTerm:(id)arg1;
-(BOOL)hasSearchTerm;
-(void)clearExcludedAttributes;
-(void)addExcludedAttribute:(int)arg1;
-(int)excludedAttributeAtIndex:(unsigned long long)arg1;
-(void)setExcludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
-(id)excludedAttributesAsString:(int)arg1;
-(int)StringAsExcludedAttributes:(id)arg1;
-(void)clearIncludedAttributes;
-(void)addIncludedAttribute:(int)arg1;
-(int)includedAttributeAtIndex:(unsigned long long)arg1;
-(void)setIncludedAttributes:(int*)arg1 count:(unsigned long long)arg2;
-(id)includedAttributesAsString:(int)arg1;
-(int)StringAsIncludedAttributes:(id)arg1;
-(_INPBContactList *)contentPerson;
-(void)setContentPerson:(id)arg1;
-(BOOL)hasContentPerson;
-(unsigned long long)excludedAttributesCount;
-(unsigned long long)includedAttributesCount;
-(_INPBStringList *)keywordString;
-(void)setKeywordString:(id)arg1;
-(BOOL)hasKeywordString;
-(BOOL)hasPeopleInPhoto;
-(BOOL)hasActivities;
-(BOOL)hasEvents;
-(_INPBGeographicalFeatureList *)geographicalFeatures;
-(void)setGeographicalFeatures:(id)arg1;
-(BOOL)hasGeographicalFeatures;
-(_INPBString *)memoryName;
-(void)setMemoryName:(id)arg1;
-(BOOL)hasMemoryName;
-(BOOL)hasPlaces;

@end

#import <Intents/NSSecureCoding.h>
#import <Intents/NSCopying.h>

@class _INPBActivityList, _INPBString, _INPBContactList, _INPBDateTimeRange, _INPBEventList, _INPBGeographicalFeatureList, _INPBIntentMetadata, _INPBDataStringList, _INPBStringList, _INPBLocation, _INPBPlaceList, NSString;

@interface _INPBSearchForPhotosIntent : PBCodable <_INPBSearchForPhotosIntent, NSSecureCoding, NSCopying> {

	SCD_Struct_IN5* _excludedAttributes;
	SCD_Struct_IN5* _includedAttributes;
	{?=} _has;
	BOOL __encodeLegacyGloryData;
	_INPBActivityList* _activities;
	_INPBString* _albumName;
	_INPBContactList* _contentPerson;
	_INPBDateTimeRange* _dateCreated;
	_INPBEventList* _events;
	_INPBGeographicalFeatureList* _geographicalFeatures;
	_INPBIntentMetadata* _intentMetadata;
	_INPBDataStringList* _keyword;
	_INPBStringList* _keywordString;
	_INPBLocation* _locationCreated;
	_INPBString* _memoryName;
	_INPBContactList* _peopleInPhoto;
	_INPBPlaceList* _places;
	_INPBStringList* _searchTerm;

}

@property (assign,setter=_setEncodeLegacyGloryData:,nonatomic) BOOL _encodeLegacyGloryData;              //@synthesize _encodeLegacyGloryData=__encodeLegacyGloryData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _INPBActivityList * activities;                                             //@synthesize activities=_activities - In the implementation block
@property (nonatomic,readonly) BOOL hasActivities; 
@property (nonatomic,retain) _INPBString * albumName;                                                    //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) _INPBContactList * contentPerson;                                           //@synthesize contentPerson=_contentPerson - In the implementation block
@property (nonatomic,readonly) BOOL hasContentPerson; 
@property (nonatomic,retain) _INPBDateTimeRange * dateCreated;                                           //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasDateCreated; 
@property (nonatomic,retain) _INPBEventList * events;                                                    //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) BOOL hasEvents; 
@property (nonatomic,readonly) int* excludedAttributes; 
@property (nonatomic,readonly) unsigned long long excludedAttributesCount; 
@property (nonatomic,retain) _INPBGeographicalFeatureList * geographicalFeatures;                        //@synthesize geographicalFeatures=_geographicalFeatures - In the implementation block
@property (nonatomic,readonly) BOOL hasGeographicalFeatures; 
@property (nonatomic,readonly) int* includedAttributes; 
@property (nonatomic,readonly) unsigned long long includedAttributesCount; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;                                       //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBDataStringList * keyword;                                              //@synthesize keyword=_keyword - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyword; 
@property (nonatomic,retain) _INPBStringList * keywordString;                                            //@synthesize keywordString=_keywordString - In the implementation block
@property (nonatomic,readonly) BOOL hasKeywordString; 
@property (nonatomic,retain) _INPBLocation * locationCreated;                                            //@synthesize locationCreated=_locationCreated - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationCreated; 
@property (nonatomic,retain) _INPBString * memoryName;                                                   //@synthesize memoryName=_memoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasMemoryName; 
@property (nonatomic,retain) _INPBContactList * peopleInPhoto;                                           //@synthesize peopleInPhoto=_peopleInPhoto - In the implementation block
@property (nonatomic,readonly) BOOL hasPeopleInPhoto; 
@property (nonatomic,retain) _INPBPlaceList * places;                                                    //@synthesize places=_places - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaces; 
@property (nonatomic,retain) _INPBStringList * searchTerm;                                               //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchTerm; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBActivityList *)activities;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setKeyword:(_INPBDataStringList *)arg1 ;
-(BOOL)hasKeyword;
-(_INPBDataStringList *)keyword;
-(void)setPlaces:(_INPBPlaceList *)arg1 ;
-(_INPBPlaceList *)places;
-(void)setActivities:(_INPBActivityList *)arg1 ;
-(_INPBEventList *)events;
-(void)setEvents:(_INPBEventList *)arg1 ;
-(BOOL)_encodeLegacyGloryData;
-(void)_setEncodeLegacyGloryData:(BOOL)arg1 ;
-(_INPBIntentMetadata *)intentMetadata;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBString *)albumName;
-(void)setAlbumName:(_INPBString *)arg1 ;
-(BOOL)hasAlbumName;
-(_INPBLocation *)locationCreated;
-(void)setLocationCreated:(_INPBLocation *)arg1 ;
-(BOOL)hasLocationCreated;
-(_INPBDateTimeRange *)dateCreated;
-(void)setDateCreated:(_INPBDateTimeRange *)arg1 ;
-(BOOL)hasDateCreated;
-(int*)includedAttributes;
-(int*)excludedAttributes;
-(_INPBContactList *)peopleInPhoto;
-(void)setPeopleInPhoto:(_INPBContactList *)arg1 ;
-(_INPBStringList *)searchTerm;
-(void)setSearchTerm:(_INPBStringList *)arg1 ;
-(BOOL)hasSearchTerm;
-(void)clearExcludedAttributes;
-(void)addExcludedAttribute:(int)arg1 ;
-(int)excludedAttributeAtIndex:(unsigned long long)arg1 ;
-(void)setExcludedAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)excludedAttributesAsString:(int)arg1 ;
-(int)StringAsExcludedAttributes:(id)arg1 ;
-(void)clearIncludedAttributes;
-(void)addIncludedAttribute:(int)arg1 ;
-(int)includedAttributeAtIndex:(unsigned long long)arg1 ;
-(void)setIncludedAttributes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)includedAttributesAsString:(int)arg1 ;
-(int)StringAsIncludedAttributes:(id)arg1 ;
-(_INPBContactList *)contentPerson;
-(void)setContentPerson:(_INPBContactList *)arg1 ;
-(BOOL)hasContentPerson;
-(unsigned long long)excludedAttributesCount;
-(unsigned long long)includedAttributesCount;
-(_INPBStringList *)keywordString;
-(void)setKeywordString:(_INPBStringList *)arg1 ;
-(BOOL)hasKeywordString;
-(BOOL)hasPeopleInPhoto;
-(BOOL)hasActivities;
-(BOOL)hasEvents;
-(_INPBGeographicalFeatureList *)geographicalFeatures;
-(void)setGeographicalFeatures:(_INPBGeographicalFeatureList *)arg1 ;
-(BOOL)hasGeographicalFeatures;
-(_INPBString *)memoryName;
-(void)setMemoryName:(_INPBString *)arg1 ;
-(BOOL)hasMemoryName;
-(BOOL)hasPlaces;
@end

