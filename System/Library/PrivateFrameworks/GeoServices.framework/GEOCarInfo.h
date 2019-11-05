/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOScreenDimension;

@interface GEOCarInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _engineTypes;
	SCD_Struct_GE1* _inputMethods;
	GEOScreenResolution _screenResolution;
	NSString* _carName;
	NSString* _manufacturer;
	NSString* _model;
	GEOScreenDimension* _screenDimension;
	int _brightness;
	int _colorRange;
	int _deviceConnection;
	int _navAidedDrivingStatus;
	BOOL _destinationSharingEnabled;
	struct {
		unsigned has_screenResolution : 1;
		unsigned has_brightness : 1;
		unsigned has_colorRange : 1;
		unsigned has_deviceConnection : 1;
		unsigned has_navAidedDrivingStatus : 1;
		unsigned has_destinationSharingEnabled : 1;
		unsigned read_unknownFields : 1;
		unsigned read_engineTypes : 1;
		unsigned read_inputMethods : 1;
		unsigned read_carName : 1;
		unsigned read_manufacturer : 1;
		unsigned read_model : 1;
		unsigned read_screenDimension : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_engineTypes : 1;
		unsigned wrote_inputMethods : 1;
		unsigned wrote_screenResolution : 1;
		unsigned wrote_carName : 1;
		unsigned wrote_manufacturer : 1;
		unsigned wrote_model : 1;
		unsigned wrote_screenDimension : 1;
		unsigned wrote_brightness : 1;
		unsigned wrote_colorRange : 1;
		unsigned wrote_deviceConnection : 1;
		unsigned wrote_navAidedDrivingStatus : 1;
		unsigned wrote_destinationSharingEnabled : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer; 
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model; 
@property (assign,nonatomic) BOOL hasScreenResolution; 
@property (assign,nonatomic) GEOScreenResolution screenResolution; 
@property (assign,nonatomic) BOOL hasDeviceConnection; 
@property (assign,nonatomic) int deviceConnection; 
@property (assign,nonatomic) BOOL hasDestinationSharingEnabled; 
@property (assign,nonatomic) BOOL destinationSharingEnabled; 
@property (assign,nonatomic) BOOL hasNavAidedDrivingStatus; 
@property (assign,nonatomic) int navAidedDrivingStatus; 
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (nonatomic,readonly) BOOL hasCarName; 
@property (nonatomic,retain) NSString * carName; 
@property (nonatomic,readonly) BOOL hasScreenDimension; 
@property (nonatomic,retain) GEOScreenDimension * screenDimension; 
@property (assign,nonatomic) BOOL hasColorRange; 
@property (assign,nonatomic) int colorRange; 
@property (assign,nonatomic) BOOL hasBrightness; 
@property (assign,nonatomic) int brightness; 
@property (nonatomic,readonly) unsigned long long inputMethodsCount; 
@property (nonatomic,readonly) int* inputMethods; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)carInfoWithTraits:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)model;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBrightness:(int)arg1 ;
-(void)setHasBrightness:(BOOL)arg1 ;
-(BOOL)hasBrightness;
-(int)brightness;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)manufacturer;
-(BOOL)hasModel;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)_readManufacturer;
-(void)_readModel;
-(void)_readEngineTypes;
-(void)_addNoFlagsEngineType:(int)arg1 ;
-(void)_readCarName;
-(void)_readScreenDimension;
-(void)_readInputMethods;
-(void)_addNoFlagsInputMethod:(int)arg1 ;
-(NSString *)carName;
-(GEOScreenDimension *)screenDimension;
-(void)setManufacturer:(NSString *)arg1 ;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(void)addEngineType:(int)arg1 ;
-(void)setCarName:(NSString *)arg1 ;
-(void)setScreenDimension:(GEOScreenDimension *)arg1 ;
-(unsigned long long)inputMethodsCount;
-(void)clearInputMethods;
-(int)inputMethodAtIndex:(unsigned long long)arg1 ;
-(void)addInputMethod:(int)arg1 ;
-(BOOL)hasManufacturer;
-(GEOScreenResolution)screenResolution;
-(void)setScreenResolution:(GEOScreenResolution)arg1 ;
-(void)setHasScreenResolution:(BOOL)arg1 ;
-(BOOL)hasScreenResolution;
-(int)deviceConnection;
-(void)setDeviceConnection:(int)arg1 ;
-(void)setHasDeviceConnection:(BOOL)arg1 ;
-(BOOL)hasDeviceConnection;
-(id)deviceConnectionAsString:(int)arg1 ;
-(int)StringAsDeviceConnection:(id)arg1 ;
-(BOOL)destinationSharingEnabled;
-(void)setDestinationSharingEnabled:(BOOL)arg1 ;
-(void)setHasDestinationSharingEnabled:(BOOL)arg1 ;
-(BOOL)hasDestinationSharingEnabled;
-(int)navAidedDrivingStatus;
-(void)setNavAidedDrivingStatus:(int)arg1 ;
-(void)setHasNavAidedDrivingStatus:(BOOL)arg1 ;
-(BOOL)hasNavAidedDrivingStatus;
-(id)navAidedDrivingStatusAsString:(int)arg1 ;
-(int)StringAsNavAidedDrivingStatus:(id)arg1 ;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(BOOL)hasCarName;
-(BOOL)hasScreenDimension;
-(int)colorRange;
-(void)setColorRange:(int)arg1 ;
-(void)setHasColorRange:(BOOL)arg1 ;
-(BOOL)hasColorRange;
-(int*)inputMethods;
-(void)setInputMethods:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)inputMethodsAsString:(int)arg1 ;
-(int)StringAsInputMethods:(id)arg1 ;
@end

