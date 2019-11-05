/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MZUniversalPlaybackPositionTransactionContext.h>

@class NSMutableDictionary, NSString;

@interface MTUniversalPlaybackPositionTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext> {

	NSMutableDictionary* _mediaItems;
	double _syncStartTime;

}

@property (nonatomic,retain) NSMutableDictionary * mediaItems;              //@synthesize mediaItems=_mediaItems - In the implementation block
@property (assign,nonatomic) double syncStartTime;                          //@synthesize syncStartTime=_syncStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUPPDomainVersion:(id)arg1 ;
+(id)UPPDomainVersion;
-(NSMutableDictionary *)mediaItems;
-(void)setMediaItems:(NSMutableDictionary *)arg1 ;
-(id)lastSyncedDomainVersion;
-(void)setSyncStartTime:(double)arg1 ;
-(double)syncStartTime;
@end

