/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/IMBasePlatformLookupService.h>

@class NSString;

@interface IMChartLookupService : IMBasePlatformLookupService {

	BOOL _filterExplicit;
	NSString* _genreId;
	NSString* _chartNumber;
	NSString* _contentProfile;
	NSString* _contentArtworkType;
	unsigned long long _limit;

}

@property (nonatomic,retain) NSString * genreId;                         //@synthesize genreId=_genreId - In the implementation block
@property (nonatomic,retain) NSString * chartNumber;                     //@synthesize chartNumber=_chartNumber - In the implementation block
@property (nonatomic,retain) NSString * contentProfile;                  //@synthesize contentProfile=_contentProfile - In the implementation block
@property (nonatomic,retain) NSString * contentArtworkType;              //@synthesize contentArtworkType=_contentArtworkType - In the implementation block
@property (assign) unsigned long long limit;                             //@synthesize limit=_limit - In the implementation block
@property (assign) BOOL filterExplicit;                                  //@synthesize filterExplicit=_filterExplicit - In the implementation block
-(void)request:(/*^block*/id)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)urlRequest;
-(void)performRequest:(/*^block*/id)arg1 ;
-(id)platformAction;
-(void)setGenreId:(NSString *)arg1 ;
-(void)setChartNumber:(NSString *)arg1 ;
-(NSString *)chartNumber;
-(NSString *)genreId;
-(BOOL)filterExplicit;
-(NSString *)contentProfile;
-(NSString *)contentArtworkType;
-(id)initWithGenreId:(id)arg1 andChartNumber:(id)arg2 ;
-(void)setContentProfile:(NSString *)arg1 ;
-(void)setContentArtworkType:(NSString *)arg1 ;
-(void)setFilterExplicit:(BOOL)arg1 ;
@end

