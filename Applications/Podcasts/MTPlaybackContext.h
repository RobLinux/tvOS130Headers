/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/NSCopying.h>

@interface MTPlaybackContext : NSObject <NSCopying> {

	BOOL _interactive;
	unsigned long long _source;
	unsigned long long _presentationType;
	unsigned long long _upNextQueueIntent;

}

@property (assign,nonatomic) unsigned long long upNextQueueIntent;               //@synthesize upNextQueueIntent=_upNextQueueIntent - In the implementation block
@property (assign,nonatomic) unsigned long long source;                          //@synthesize source=_source - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic) unsigned long long presentationType;                //@synthesize presentationType=_presentationType - In the implementation block
+(id)defaultContext;
+(id)contextWithReason:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(unsigned long long)presentationType;
-(void)setPresentationType:(unsigned long long)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
-(BOOL)isInteractive;
-(unsigned long long)upNextQueueIntent;
-(void)setUpNextQueueIntent:(unsigned long long)arg1 ;
-(BOOL)playbackIsUserRequested;
@end
