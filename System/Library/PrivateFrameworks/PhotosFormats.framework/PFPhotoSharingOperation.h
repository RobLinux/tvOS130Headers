/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError, NSURL, NSString, CLLocation, NSDate, PFAssetAdjustments;

@interface PFPhotoSharingOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _externalIsolation;
	NSError* _operationError;
	BOOL _operationComplete;
	BOOL _operationSuccess;
	BOOL _shouldStripLocation;
	BOOL _shouldConvertToSRGB;
	BOOL _shouldStripMetadata;
	NSURL* _outputDirectoryURL;
	NSString* _outputFilename;
	CLLocation* _customLocation;
	NSDate* _customDate;
	NSString* _customAccessibilityLabel;
	NSURL* _imageURL;
	NSURL* _resultingFileURL;
	PFAssetAdjustments* __adjustments;

}

@property (setter=_setImageURL:,nonatomic,copy) NSURL * imageURL;                                    //@synthesize imageURL=_imageURL - In the implementation block
@property (setter=_setAdjustments:,nonatomic,retain) PFAssetAdjustments * _adjustments;              //@synthesize _adjustments=__adjustments - In the implementation block
@property (nonatomic,copy) NSURL * outputDirectoryURL;                                               //@synthesize outputDirectoryURL=_outputDirectoryURL - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                                //@synthesize outputFilename=_outputFilename - In the implementation block
@property (assign,nonatomic) BOOL shouldStripMetadata;                                               //@synthesize shouldStripMetadata=_shouldStripMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldStripLocation;                                               //@synthesize shouldStripLocation=_shouldStripLocation - In the implementation block
@property (nonatomic,copy) CLLocation * customLocation;                                              //@synthesize customLocation=_customLocation - In the implementation block
@property (nonatomic,copy) NSDate * customDate;                                                      //@synthesize customDate=_customDate - In the implementation block
@property (nonatomic,copy) NSString * customAccessibilityLabel;                                      //@synthesize customAccessibilityLabel=_customAccessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL shouldConvertToSRGB;                                               //@synthesize shouldConvertToSRGB=_shouldConvertToSRGB - In the implementation block
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,copy,readonly) NSURL * resultingFileURL;                                        //@synthesize resultingFileURL=_resultingFileURL - In the implementation block
@property (nonatomic,readonly) NSError * operationError; 
+(BOOL)outputSupportedForTypeIdentifier:(CFStringRef)arg1 ;
+(id)operationErrorWithCode:(long long)arg1 withDescription:(id)arg2 ;
-(float)progress;
-(void)main;
-(NSError *)operationError;
-(BOOL)success;
-(NSURL *)imageURL;
-(NSString *)outputFilename;
-(void)setOutputFilename:(NSString *)arg1 ;
-(id)initWithImageURL:(id)arg1 adjustmentData:(id)arg2 ;
-(void)setOutputDirectoryURL:(NSURL *)arg1 ;
-(NSURL *)outputDirectoryURL;
-(void)setCustomLocation:(CLLocation *)arg1 ;
-(CLLocation *)customLocation;
-(void)setCustomAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)customAccessibilityLabel;
-(void)setShouldStripLocation:(BOOL)arg1 ;
-(BOOL)shouldStripLocation;
-(void)setShouldConvertToSRGB:(BOOL)arg1 ;
-(BOOL)shouldConvertToSRGB;
-(NSDate *)customDate;
-(void)setCustomDate:(NSDate *)arg1 ;
-(BOOL)shouldStripMetadata;
-(void)setShouldStripMetadata:(BOOL)arg1 ;
-(void)_setImageURL:(id)arg1 ;
-(NSURL *)resultingFileURL;
-(PFAssetAdjustments *)_adjustments;
-(void)_setAdjustments:(id)arg1 ;
@end

