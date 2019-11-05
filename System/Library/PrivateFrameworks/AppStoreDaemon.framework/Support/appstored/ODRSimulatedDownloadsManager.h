/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ODRSimulatedDownloadsManager : NSObject {

	NSMutableArray* _entries;

}
+(void)initialize;
+(id)defaultManager;
+(unsigned long long)simulatedBandwidth;
+(void)setSimulatedBandwidth:(unsigned long long)arg1 ;
+(unsigned long long)getDirectoryFileSize:(id)arg1 ;
+(double)_computeSimulatedDownloadTimeForURL:(id)arg1 ;
-(id)init;
-(id)status;
-(void)addRequest:(id)arg1 ;
-(void)removeRequest:(id)arg1 ;
-(void)removeEntry:(id)arg1 ;
@end

