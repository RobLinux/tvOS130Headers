/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@interface WFPodcastUtilities : NSObject
+(void*)createPlayerPath;
+(id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2 ;
+(MRSystemAppPlaybackQueueRef)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(BOOL)arg2 ;
+(void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

