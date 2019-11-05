/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSNumber, NSString, PLManagedAsset;

@interface PLExtendedAttributes : PLManagedObject

@property (nonatomic,retain) NSNumber * aperture; 
@property (nonatomic,retain) NSNumber * bitrate; 
@property (nonatomic,retain) NSString * cameraModel; 
@property (nonatomic,retain) NSString * cameraMake; 
@property (nonatomic,retain) NSString * codec; 
@property (nonatomic,retain) NSNumber * duration; 
@property (nonatomic,retain) NSNumber * exposureBias; 
@property (nonatomic,retain) NSNumber * flashFired; 
@property (nonatomic,retain) NSNumber * focalLength; 
@property (nonatomic,retain) NSNumber * fps; 
@property (nonatomic,retain) NSNumber * iso; 
@property (nonatomic,retain) NSString * lensModel; 
@property (nonatomic,retain) NSNumber * meteringMode; 
@property (nonatomic,retain) NSNumber * sampleRate; 
@property (nonatomic,retain) NSNumber * shutterSpeed; 
@property (nonatomic,retain) NSNumber * trackFormat; 
@property (nonatomic,retain) NSNumber * whiteBalance; 
@property (nonatomic,retain) NSNumber * latitude; 
@property (nonatomic,retain) NSNumber * longitude; 
@property (nonatomic,retain) PLManagedAsset * asset; 
+(id)entityName;
+(id)distinctValuesForKeyPath:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
@end

