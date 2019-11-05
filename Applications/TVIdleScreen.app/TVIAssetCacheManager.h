/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:52:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVIdleScreen.app/TVIdleScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TVIAssetCache, NSObject;

@interface TVIAssetCacheManager : NSObject {

	unsigned long long _guaranteedAssetLimit;
	TVIAssetCache* _assetCache1080SDR;
	TVIAssetCache* _assetCache1080HDR;
	TVIAssetCache* _assetCache4KSDR;
	TVIAssetCache* _assetCache4KHDR;
	NSObject*<OS_dispatch_queue> _guaranteedAssetLimitQ;

}

@property (nonatomic,retain) TVIAssetCache * assetCache1080SDR;                               //@synthesize assetCache1080SDR=_assetCache1080SDR - In the implementation block
@property (nonatomic,retain) TVIAssetCache * assetCache1080HDR;                               //@synthesize assetCache1080HDR=_assetCache1080HDR - In the implementation block
@property (nonatomic,retain) TVIAssetCache * assetCache4KSDR;                                 //@synthesize assetCache4KSDR=_assetCache4KSDR - In the implementation block
@property (nonatomic,retain) TVIAssetCache * assetCache4KHDR;                                 //@synthesize assetCache4KHDR=_assetCache4KHDR - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> guaranteedAssetLimitQ;              //@synthesize guaranteedAssetLimitQ=_guaranteedAssetLimitQ - In the implementation block
@property (assign,nonatomic) unsigned long long guaranteedAssetLimit; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)containsAsset:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 guaranteedAssetLimit:(unsigned long long)arg2 ;
-(void)setGuaranteedAssetLimit:(unsigned long long)arg1 ;
-(id)assetCacheForDisplayMode:(id)arg1 ;
-(BOOL)removeAssetWithIdentifier:(id)arg1 ;
-(unsigned long long)guaranteedAssetLimit;
-(TVIAssetCache *)assetCache1080SDR;
-(void)setAssetCache1080SDR:(TVIAssetCache *)arg1 ;
-(TVIAssetCache *)assetCache1080HDR;
-(void)setAssetCache1080HDR:(TVIAssetCache *)arg1 ;
-(TVIAssetCache *)assetCache4KSDR;
-(void)setAssetCache4KSDR:(TVIAssetCache *)arg1 ;
-(TVIAssetCache *)assetCache4KHDR;
-(void)setAssetCache4KHDR:(TVIAssetCache *)arg1 ;
-(NSObject*<OS_dispatch_queue>)guaranteedAssetLimitQ;
-(void)setGuaranteedAssetLimitQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

