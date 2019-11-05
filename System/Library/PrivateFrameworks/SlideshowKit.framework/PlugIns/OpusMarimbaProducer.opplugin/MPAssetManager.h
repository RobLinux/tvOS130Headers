/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@interface MPAssetManager : NSObject
+(id)sharedManager;
+(void)releaseSharedManager;
+(void)cleanFaceCore;
+(id)faceCoreAPI;
+(id)convertCGImageToBuffer:(CGImageRef)arg1 ;
+(id)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 ;
+(id)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isAssetAtPathASupportedImage:(id)arg1 ;
-(BOOL)isAssetAtPathASupportedMovie:(id)arg1 ;
-(BOOL)isAssetAtPathASupportedAudio:(id)arg1 ;
-(id)regionsOfInterestForAsset:(CGImageRef)arg1 ;
-(void)setSavesToDisk:(BOOL)arg1 ;
-(void)gatherMetadataForAssetAtPath:(id)arg1 ;
-(double)durationForAssetAtPath:(id)arg1 ;
-(double)startTimeForAssetAtPath:(id)arg1 ;
-(double)stopTimeForAssetAtPath:(id)arg1 ;
-(CGSize)resolutionForAssetAtPath:(id)arg1 ;
-(id)creationDateForAssetAtPath:(id)arg1 ;
-(id)keywordsForAssetAtPath:(id)arg1 ;
-(id)latitudeForAssetAtPath:(id)arg1 ;
-(id)longitudeForAssetAtPath:(id)arg1 ;
-(id)altitudeForAssetAtPath:(id)arg1 ;
-(id)locationHierarchyForAssetAtPath:(id)arg1 ;
-(unsigned long long)mediaTypeForAssetAtPath:(id)arg1 ;
-(id)regionsOfInterestForAssetAtPath:(id)arg1 ;
-(id)absolutePathFromPath:(id)arg1 ;
-(double)posterTimeForAssetAtPath:(id)arg1 ;
-(void)tryToSaveCache;
-(id)roiInfoAtIndex:(long long)arg1 forAssetAtPath:(id)arg2 ;
-(CGRect)regionOfInterestAtIndex:(long long)arg1 forAssetAtPath:(id)arg2 ;
-(void)addROIInfo:(id)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3 ;
-(void)addRegionOfInterest:(CGRect)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3 ;
-(void)setROIInfo:(id)arg1 atIndex:(long long)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4 ;
-(void)setRegionOfInterest:(CGRect)arg1 atIndex:(long long)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4 ;
-(void)updateROIInfoAtIndex:(long long)arg1 atPath:(id)arg2 to:(id)arg3 saveToCache:(BOOL)arg4 ;
-(void)updateRegionOfInterestAtIndex:(long long)arg1 atPath:(id)arg2 to:(CGRect)arg3 saveToCache:(BOOL)arg4 ;
-(void)moveRegionOfInterestWithPath:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 saveToCache:(BOOL)arg4 ;
-(void)setForceOrderForRegionsOfInterest:(BOOL)arg1 forPath:(id)arg2 saveToCache:(BOOL)arg3 ;
-(void)removeRegionOfInterestAtIndex:(long long)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3 ;
-(id)prepareInfoForAssetsAtPaths:(id)arg1 ;
-(void)cacheAttributes:(id)arg1 forPath:(id)arg2 ;
@end

