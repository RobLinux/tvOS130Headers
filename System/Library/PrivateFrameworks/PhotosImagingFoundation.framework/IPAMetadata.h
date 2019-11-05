/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/NSCopying.h>

@class NSString, NSMutableDictionary, NSDictionary, NSArray, NSDate, NSTimeZone, CLLocation, NSNumber;

@interface IPAMetadata : NSObject <NSCopying> {

	BOOL _xmpLoaded;
	NSString* _filePath;
	NSMutableDictionary* _exifProperties;
	NSMutableDictionary* _iptcProperties;
	NSMutableDictionary* _basicProperties;
	NSMutableDictionary* _fileSystemProperties;
	NSMutableDictionary* _customInfo;
	NSMutableDictionary* _cgImageProperties;
	NSDictionary* _audioVideoProperties;
	NSArray* _focusPoints;
	long long _originalOrientation;
	long long _orientation;
	NSArray* _cgImageMetadataProperties;
	NSDate* _timeZoneAdjustedImageDate;
	NSTimeZone* _imageTimeZone;
	NSString* _jsonFormattedDescription;
	NSString* _fileTypeIdentifier;
	CLLocation* _exifLocation;
	CGSize _originalUnrotatedSize;

}

@property (nonatomic,retain) NSDate * timeZoneAdjustedImageDate;                         //@synthesize timeZoneAdjustedImageDate=_timeZoneAdjustedImageDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * imageTimeZone;                                 //@synthesize imageTimeZone=_imageTimeZone - In the implementation block
@property (nonatomic,retain) NSString * filePath;                                        //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * exifProperties;                       //@synthesize exifProperties=_exifProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iptcProperties;                       //@synthesize iptcProperties=_iptcProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * basicProperties;                      //@synthesize basicProperties=_basicProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileSystemProperties;                 //@synthesize fileSystemProperties=_fileSystemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customInfo;                           //@synthesize customInfo=_customInfo - In the implementation block
@property (assign,nonatomic) BOOL xmpLoaded;                                             //@synthesize xmpLoaded=_xmpLoaded - In the implementation block
@property (nonatomic,retain) NSString * jsonFormattedDescription;                        //@synthesize jsonFormattedDescription=_jsonFormattedDescription - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cgImageProperties;                    //@synthesize cgImageProperties=_cgImageProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * audioVideoProperties;                        //@synthesize audioVideoProperties=_audioVideoProperties - In the implementation block
@property (nonatomic,retain) NSArray * focusPoints;                                      //@synthesize focusPoints=_focusPoints - In the implementation block
@property (assign,nonatomic) CGSize originalUnrotatedSize;                               //@synthesize originalUnrotatedSize=_originalUnrotatedSize - In the implementation block
@property (assign,nonatomic) long long originalOrientation;                              //@synthesize originalOrientation=_originalOrientation - In the implementation block
@property (assign,nonatomic) long long orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSArray * cgImageMetadataProperties;                        //@synthesize cgImageMetadataProperties=_cgImageMetadataProperties - In the implementation block
@property (nonatomic,retain) NSString * fileTypeIdentifier;                              //@synthesize fileTypeIdentifier=_fileTypeIdentifier - In the implementation block
@property (nonatomic,retain) CLLocation * exifLocation;                                  //@synthesize exifLocation=_exifLocation - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,readonly) NSDate * imageDate; 
@property (nonatomic,readonly) NSString * timeZoneName; 
@property (nonatomic,readonly) NSNumber * timeZoneOffset; 
@property (nonatomic,readonly) NSString * exifImageDateTimeString; 
@property (nonatomic,readonly) NSString * burstUuid; 
@property (nonatomic,readonly) NSString * groupingUuid; 
@property (nonatomic,readonly) NSString * mediaGroupUUID; 
@property (nonatomic,readonly) NSString * deferredPhotoProcessingIdentifer; 
@property (nonatomic,readonly) NSString * spatialOverCaptureIdentifier; 
@property (nonatomic,readonly) BOOL isSpatialOverCapture; 
@property (nonatomic,readonly) BOOL isDeferredPhotoProxy; 
@property (nonatomic,readonly) BOOL hasCustomRendered; 
@property (nonatomic,readonly) long long customRendered; 
@property (nonatomic,readonly) BOOL isAutoloop; 
@property (nonatomic,readonly) BOOL isMirror; 
@property (nonatomic,readonly) BOOL isLongExposure; 
@property (nonatomic,readonly) BOOL isPortrait; 
@property (nonatomic,readonly) BOOL isCompositeHDR; 
@property (nonatomic,readonly) BOOL isSDOF; 
+(id)proxyPropertyListForAVAsset:(id)arg1 reduceMetadata:(BOOL)arg2 ;
+(id)metadataIdentifierTypeMapVideo;
+(id)metadataIdentifierTypeMapImage;
+(CGImageSourceRef)newImageSourceForURL:(id)arg1 options:(id)arg2 ;
+(CGImageSourceRef)newImageSourceForData:(id)arg1 uti:(id)arg2 options:(id)arg3 ;
+(id)defaultOptionsForCGImageSource;
+(id)metadataIdentifierTypeMapCommon;
+(id)utiFromFastModernizeVideoMediaWithMetadata:(id)arg1 ;
+(void)test_digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)encodedData;
-(long long)orientation;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)setOrientation:(long long)arg1 ;
-(CGSize)imageSize;
-(BOOL)isPortrait;
-(id)initWithPath:(id)arg1 options:(id)arg2 ;
-(NSString *)timeZoneName;
-(NSMutableDictionary *)customInfo;
-(void)setCustomInfo:(NSMutableDictionary *)arg1 ;
-(void)setCustomProperties:(id)arg1 ;
-(id)descriptionDictionary;
-(long long)originalOrientation;
-(void)setOriginalOrientation:(long long)arg1 ;
-(NSNumber *)timeZoneOffset;
-(CLLocation *)exifLocation;
-(NSMutableDictionary *)cgImageProperties;
-(NSMutableDictionary *)fileSystemProperties;
-(NSString *)deferredPhotoProcessingIdentifer;
-(BOOL)isDeferredPhotoProxy;
-(id)initWithPath:(id)arg1 fileData:(id)arg2 options:(id)arg3 loadXmpData:(BOOL)arg4 xmpSidecarPath:(id)arg5 ;
-(NSDate *)imageDate;
-(BOOL)isAutoloop;
-(BOOL)isLongExposure;
-(BOOL)isMirror;
-(NSMutableDictionary *)exifProperties;
-(NSString *)spatialOverCaptureIdentifier;
-(NSString *)exifImageDateTimeString;
-(NSString *)fileTypeIdentifier;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 cgImageProperties:(id)arg2 ;
-(NSString *)mediaGroupUUID;
-(NSDate *)timeZoneAdjustedImageDate;
-(id)initWithPath:(id)arg1 imageSource:(CGImageSourceRef)arg2 options:(id)arg3 loadXmpData:(BOOL)arg4 xmpSidecarPath:(id)arg5 ;
-(void)setEncodedAudioVideoData:(id)arg1 ;
-(void)setEncodedImageData:(id)arg1 ;
-(BOOL)isSpatialOverCapture;
-(void)loadAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(BOOL)arg3 ;
-(BOOL)isSDOF;
-(BOOL)conformsToUTType:(CFStringRef)arg1 forExtention:(id)arg2 ;
-(id)initWithPath:(id)arg1 loadMinMetadata:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 fileData:(id)arg2 imageSource:(CGImageSourceRef)arg3 cgImageProperties:(id)arg4 options:(id)arg5 loadMinMetadata:(BOOL)arg6 loadXmpData:(BOOL)arg7 xmpSidecarPath:(id)arg8 ;
-(id)utiForExtension:(id)arg1 ;
-(NSTimeZone *)imageTimeZone;
-(NSString *)burstUuid;
-(NSString *)groupingUuid;
-(BOOL)hasCustomRendered;
-(long long)customRendered;
-(void)clearImageAttributes;
-(void)mergeMetadata:(id)arg1 ;
-(void)setRawFileSystemAttributes:(id)arg1 ;
-(void)setCustomProperty:(id)arg1 forKey:(id)arg2 ;
-(id)customPropertyForKey:(id)arg1 ;
-(void)setExifProperty:(id)arg1 forKey:(id)arg2 ;
-(id)exifPropertyForKey:(id)arg1 ;
-(void)setIPTCProperty:(id)arg1 forKey:(id)arg2 ;
-(id)iptcPropertyForKey:(id)arg1 ;
-(void)extractFocusPointsFrom:(id)arg1 orExifAux:(id)arg2 ;
-(NSString *)jsonFormattedDescription;
-(void)setCGImageProperties:(id)arg1 ;
-(id)_digestedIptcAttributesFromRawAttributes:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2 ;
-(id)_digestedExifAttributesFromRawAttributes:(id)arg1 ;
-(void)_enforceProperFormatting:(id)arg1 ;
-(void)_digestedOrientationExifAttributesFromExif:(id)arg1 ;
-(void)digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(void)_digestedDateTimeExifAttributesFromExif:(id)arg1 ;
-(void)_digestedCameraSettingsExifAttributesFromExif:(id)arg1 ;
-(void)_digestedAVExifAttributesFromExif:(id)arg1 ;
-(void)_digestedGPSExifAttributesFromExif:(id)arg1 ;
-(void)_digestedCollapseArrayExifAttributesFromExif:(id)arg1 ;
-(void)setAudioVideoAttributesFromDictionary:(id)arg1 ;
-(void)setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(BOOL)arg2 readyHandler:(/*^block*/id)arg3 ;
-(void)waitForAsync_setAudioVideoAttributesForURL:(id)arg1 fullMetadata:(BOOL)arg2 ;
-(id)exifTimezoneOffsetFromDateString:(id)arg1 offsetInSeconds:(long long*)arg2 ;
-(void)setAudioVideoAttributesForAVAsset:(id)arg1 path:(id)arg2 fullMetadata:(BOOL)arg3 readyHandler:(/*^block*/id)arg4 ;
-(void)setAudioVideoAttributesForAVProxyData:(id)arg1 readyHandler:(/*^block*/id)arg2 ;
-(void)waitForAsync_setAudioVideoAttributesForAVProxyData:(id)arg1 ;
-(void)audioVideoProxyPropertyListForAsset:(id)arg1 performExport:(BOOL)arg2 atEnd:(/*^block*/id)arg3 ;
-(BOOL)isSloMoForType:(unsigned char)arg1 ;
-(long long)hdrType;
-(BOOL)isCompositeHDR;
-(id)encodedDataReduceIfLargerThan:(unsigned long long)arg1 ;
-(void)mergeMetadataFromFileToSidecarFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ofType:(id)arg3 ;
-(void)restoreImportantMetadataFromPropertySet:(id)arg1 toSidecarSet:(id)arg2 ;
-(void)dumpXmpProperties;
-(BOOL)convertGPSString:(id)arg1 toLatitude:(id*)arg2 longitude:(id*)arg3 ;
-(void)setExifProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)iptcProperties;
-(void)setIptcProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)basicProperties;
-(void)setBasicProperties:(NSMutableDictionary *)arg1 ;
-(void)setFileSystemProperties:(NSMutableDictionary *)arg1 ;
-(BOOL)xmpLoaded;
-(void)setXmpLoaded:(BOOL)arg1 ;
-(void)setCgImageProperties:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)audioVideoProperties;
-(void)setAudioVideoProperties:(NSDictionary *)arg1 ;
-(NSArray *)focusPoints;
-(void)setFocusPoints:(NSArray *)arg1 ;
-(CGSize)originalUnrotatedSize;
-(void)setOriginalUnrotatedSize:(CGSize)arg1 ;
-(NSArray *)cgImageMetadataProperties;
-(void)setCgImageMetadataProperties:(NSArray *)arg1 ;
-(void)setTimeZoneAdjustedImageDate:(NSDate *)arg1 ;
-(void)setImageTimeZone:(NSTimeZone *)arg1 ;
-(void)setJsonFormattedDescription:(NSString *)arg1 ;
-(void)setFileTypeIdentifier:(NSString *)arg1 ;
-(void)setExifLocation:(CLLocation *)arg1 ;
@end

