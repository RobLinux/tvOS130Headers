/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate;

@interface GEOEventRecorderInstrumentation : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSString* _filepath;
	NSString* _geoFilepath;
	NSString* _movieFilepath;
	NSDate* _startDate;

}
+(id)initializeDefaultInstrumentation;
+(id)defaultInstrumentation;
+(void)endInstrumentation;
-(id)init;
-(void)_setupLogging;
-(void)initializeFilepaths;
-(void)writeString:(id)arg1 ToFilepath:(id)arg2 ;
-(void)_captureScreenVideo:(id)arg1 ;
-(id)getRecordedFilePaths;
-(void)captureUIEvent:(id)arg1 ;
-(void)captureUserActionLogMessageEvent:(id)arg1 ;
-(void)captureEventRecorderScreenVideo;
@end

