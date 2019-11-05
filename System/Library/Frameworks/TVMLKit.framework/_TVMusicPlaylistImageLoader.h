/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVImageLoader.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface _TVMusicPlaylistImageLoader : NSObject <TVImageLoader> {

	NSMutableArray* _pendingQueue;
	NSObject*<OS_dispatch_queue> _serialProcessingQueue;
	unsigned long long _maxConcurrentCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)_executeRequest:(id)arg1 ;
-(id)imageKeyForObject:(id)arg1 ;
-(void)cancelLoad:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_processFirstRequest:(id)arg1 ;
@end

