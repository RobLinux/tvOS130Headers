/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <PodcastsTVTopShelfExtension/IMURLBag.h>

@class NSMutableDictionary, NSDictionary, IMURLBag, NSOperationQueue;

@interface MTStoreBag : IMURLBag {

	NSMutableDictionary* _keyValues;
	NSDictionary* _defaultValues;
	BOOL _singleKeyLoadedFromBag;
	long long _downloadLimitPodcast;
	long long _downloadLimitVideoPodcast;
	IMURLBag* _bag;
	NSOperationQueue* _queue;

}

@property (assign,nonatomic) BOOL singleKeyLoadedFromBag;                      //@synthesize singleKeyLoadedFromBag=_singleKeyLoadedFromBag - In the implementation block
@property (nonatomic,retain) IMURLBag * bag;                                   //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long downloadLimitPodcast;                   //@synthesize downloadLimitPodcast=_downloadLimitPodcast - In the implementation block
@property (assign,nonatomic) long long downloadLimitVideoPodcast;              //@synthesize downloadLimitVideoPodcast=_downloadLimitVideoPodcast - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)copy;
-(id)init;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(id)keys;
-(IMURLBag *)bag;
-(void)setBag:(IMURLBag *)arg1 ;
-(id)bagValueForKey:(id)arg1 ;
-(unsigned long long)explicitContentBadgeTreatment;
-(void)setDownloadLimitPodcast:(long long)arg1 ;
-(void)setDownloadLimitVideoPodcast:(long long)arg1 ;
-(id)amsBagValueForKey:(id)arg1 ;
-(void)_reportBagLoadError:(id)arg1 forKey:(id)arg2 ;
-(void)setSingleKeyLoadedFromBag:(BOOL)arg1 ;
-(id)_amsBagValueForKey:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)bagHasLoaded;
-(void)bagValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)downloadLimitPodcast;
-(long long)downloadLimitVideoPodcast;
-(BOOL)singleKeyLoadedFromBag;
@end

