/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray, GEOLatLng;

@interface GEOBusiness : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	unsigned long long _uID;
	NSString* _uRL;
	NSMutableArray* _attributeKeyValues;
	NSMutableArray* _attributions;
	NSMutableArray* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _localizedCategories;
	NSString* _mapsURL;
	NSString* _name;
	NSMutableArray* _openHours;
	NSString* _phoneticName;
	NSMutableArray* _photos;
	NSMutableArray* _placeDataAmendments;
	NSMutableArray* _ratings;
	NSMutableArray* _sources;
	NSMutableArray* _starRatings;
	NSString* _telephone;
	BOOL _isClosed;
	struct {
		unsigned has_uID : 1;
		unsigned has_isClosed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_uRL : 1;
		unsigned read_attributeKeyValues : 1;
		unsigned read_attributions : 1;
		unsigned read_categorys : 1;
		unsigned read_center : 1;
		unsigned read_localizedCategories : 1;
		unsigned read_mapsURL : 1;
		unsigned read_name : 1;
		unsigned read_openHours : 1;
		unsigned read_phoneticName : 1;
		unsigned read_photos : 1;
		unsigned read_placeDataAmendments : 1;
		unsigned read_ratings : 1;
		unsigned read_sources : 1;
		unsigned read_starRatings : 1;
		unsigned read_telephone : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_uID : 1;
		unsigned wrote_uRL : 1;
		unsigned wrote_attributeKeyValues : 1;
		unsigned wrote_attributions : 1;
		unsigned wrote_categorys : 1;
		unsigned wrote_center : 1;
		unsigned wrote_localizedCategories : 1;
		unsigned wrote_mapsURL : 1;
		unsigned wrote_name : 1;
		unsigned wrote_openHours : 1;
		unsigned wrote_phoneticName : 1;
		unsigned wrote_photos : 1;
		unsigned wrote_placeDataAmendments : 1;
		unsigned wrote_ratings : 1;
		unsigned wrote_sources : 1;
		unsigned wrote_starRatings : 1;
		unsigned wrote_telephone : 1;
		unsigned wrote_isClosed : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) unsigned long long uID; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName; 
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone; 
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL; 
@property (assign,nonatomic) BOOL hasIsClosed; 
@property (assign,nonatomic) BOOL isClosed; 
@property (nonatomic,readonly) BOOL hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL; 
@property (nonatomic,retain) NSMutableArray * ratings; 
@property (nonatomic,retain) NSMutableArray * categorys; 
@property (nonatomic,retain) NSMutableArray * photos; 
@property (nonatomic,retain) NSMutableArray * attributeKeyValues; 
@property (nonatomic,retain) NSMutableArray * openHours; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,retain) NSMutableArray * localizedCategories; 
@property (nonatomic,retain) NSMutableArray * attributions; 
@property (nonatomic,retain) NSMutableArray * sources; 
@property (nonatomic,retain) NSMutableArray * starRatings; 
@property (nonatomic,retain) NSMutableArray * placeDataAmendments; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)sourceType;
+(BOOL)isValid:(id)arg1 ;
+(Class)ratingType;
+(Class)categoryType;
+(Class)photoType;
+(Class)attributeKeyValueType;
+(Class)openHoursType;
+(Class)localizedCategoriesType;
+(Class)attributionType;
+(Class)starRatingType;
+(Class)placeDataAmendmentType;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)addSource:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSMutableArray *)sources;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readName;
-(void)_readPhoneticName;
-(void)_readTelephone;
-(void)_readURL;
-(void)_readMapsURL;
-(void)_readRatings;
-(void)_addNoFlagsRating:(id)arg1 ;
-(void)_readCategorys;
-(void)_addNoFlagsCategory:(id)arg1 ;
-(void)_readPhotos;
-(void)_addNoFlagsPhoto:(id)arg1 ;
-(void)_readAttributeKeyValues;
-(void)_addNoFlagsAttributeKeyValue:(id)arg1 ;
-(void)_readOpenHours;
-(void)_addNoFlagsOpenHours:(id)arg1 ;
-(void)_readLocalizedCategories;
-(void)_addNoFlagsLocalizedCategories:(id)arg1 ;
-(void)_readAttributions;
-(void)_addNoFlagsAttribution:(id)arg1 ;
-(void)_readSources;
-(void)_addNoFlagsSource:(id)arg1 ;
-(void)_readStarRatings;
-(void)_addNoFlagsStarRating:(id)arg1 ;
-(void)_readPlaceDataAmendments;
-(void)_addNoFlagsPlaceDataAmendment:(id)arg1 ;
-(NSString *)phoneticName;
-(NSString *)telephone;
-(NSString *)uRL;
-(NSString *)mapsURL;
-(NSMutableArray *)categorys;
-(NSMutableArray *)starRatings;
-(void)setPhoneticName:(NSString *)arg1 ;
-(void)setTelephone:(NSString *)arg1 ;
-(void)setMapsURL:(NSString *)arg1 ;
-(unsigned long long)ratingsCount;
-(void)clearRatings;
-(id)ratingAtIndex:(unsigned long long)arg1 ;
-(void)addRating:(id)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(id)arg1 ;
-(unsigned long long)photosCount;
-(void)clearPhotos;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(void)addPhoto:(id)arg1 ;
-(unsigned long long)attributeKeyValuesCount;
-(void)clearAttributeKeyValues;
-(id)attributeKeyValueAtIndex:(unsigned long long)arg1 ;
-(void)addAttributeKeyValue:(id)arg1 ;
-(unsigned long long)openHoursCount;
-(void)clearOpenHours;
-(id)openHoursAtIndex:(unsigned long long)arg1 ;
-(void)addOpenHours:(id)arg1 ;
-(unsigned long long)localizedCategoriesCount;
-(void)clearLocalizedCategories;
-(id)localizedCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)addLocalizedCategories:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(unsigned long long)sourcesCount;
-(void)clearSources;
-(id)sourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)starRatingsCount;
-(void)clearStarRatings;
-(id)starRatingAtIndex:(unsigned long long)arg1 ;
-(void)addStarRating:(id)arg1 ;
-(unsigned long long)placeDataAmendmentsCount;
-(void)clearPlaceDataAmendments;
-(id)placeDataAmendmentAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceDataAmendment:(id)arg1 ;
-(NSMutableArray *)ratings;
-(NSMutableArray *)photos;
-(NSMutableArray *)attributeKeyValues;
-(NSMutableArray *)openHours;
-(NSMutableArray *)localizedCategories;
-(NSMutableArray *)attributions;
-(NSMutableArray *)placeDataAmendments;
-(unsigned long long)uID;
-(void)setUID:(unsigned long long)arg1 ;
-(void)setHasUID:(BOOL)arg1 ;
-(BOOL)hasUID;
-(BOOL)hasPhoneticName;
-(BOOL)hasTelephone;
-(BOOL)hasURL;
-(BOOL)isClosed;
-(void)setIsClosed:(BOOL)arg1 ;
-(void)setHasIsClosed:(BOOL)arg1 ;
-(BOOL)hasIsClosed;
-(BOOL)hasMapsURL;
-(void)setRatings:(NSMutableArray *)arg1 ;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(void)setAttributeKeyValues:(NSMutableArray *)arg1 ;
-(void)setOpenHours:(NSMutableArray *)arg1 ;
-(void)setLocalizedCategories:(NSMutableArray *)arg1 ;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(void)setSources:(NSMutableArray *)arg1 ;
-(void)setStarRatings:(NSMutableArray *)arg1 ;
-(void)setPlaceDataAmendments:(NSMutableArray *)arg1 ;
-(id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6 ;
-(id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned)arg5 normalizedUserRatingScore:(float)arg6 ;
@end

