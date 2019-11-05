/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPredicateManifest.h>

@class NSString;

@interface MTPodcastManifest : MTPredicateManifest {

	NSString* _podcastUuid;
	unsigned long long _sectionType;

}

@property (nonatomic,retain) NSString * podcastUuid;                      //@synthesize podcastUuid=_podcastUuid - In the implementation block
@property (assign,nonatomic) unsigned long long sectionType;              //@synthesize sectionType=_sectionType - In the implementation block
+(id)activityTypeSuffix;
+(void)createManifestForActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activity;
-(unsigned long long)sectionType;
-(void)setSectionType:(unsigned long long)arg1 ;
-(NSString *)podcastUuid;
-(void)setPodcastUuid:(NSString *)arg1 ;
-(void)_propertyDidChange;
-(id)initWithInitialEpisodeUuid:(id)arg1 sectionType:(unsigned long long)arg2 ;
@end

