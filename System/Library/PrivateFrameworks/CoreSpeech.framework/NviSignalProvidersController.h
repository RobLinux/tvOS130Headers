/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NviAssetsProvider;
@class NSDictionary, NSMapTable, NSHashTable;

@interface NviSignalProvidersController : NSObject {

	id<NviAssetsProvider> _assetsProvider;
	NSDictionary* _dataSrcMap;
	NSMapTable* _sigProvidersMap;
	NSHashTable* _currActiveSigProvTypes;
	NSHashTable* _currActiveDataSourceTypes;

}

@property (nonatomic,retain) id<NviAssetsProvider> assetsProvider;                 //@synthesize assetsProvider=_assetsProvider - In the implementation block
@property (nonatomic,retain) NSDictionary * dataSrcMap;                            //@synthesize dataSrcMap=_dataSrcMap - In the implementation block
@property (nonatomic,retain) NSMapTable * sigProvidersMap;                         //@synthesize sigProvidersMap=_sigProvidersMap - In the implementation block
@property (nonatomic,retain) NSHashTable * currActiveSigProvTypes;                 //@synthesize currActiveSigProvTypes=_currActiveSigProvTypes - In the implementation block
@property (nonatomic,retain) NSHashTable * currActiveDataSourceTypes;              //@synthesize currActiveDataSourceTypes=_currActiveDataSourceTypes - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)stop;
-(void)reset;
-(id)initWithAssetsProvider:(id)arg1 dataSourceMap:(id)arg2 signalProviderToDataSourceMap:(id)arg3 ;
-(void)registerSignalProviderDelegateForAllSignalTypes:(id)arg1 ;
-(void)startWithNviContext:(id)arg1 ;
-(void)unregisterSignalProviderDelegateForAllSignalTypes:(id)arg1 ;
-(BOOL)_setupSignalProviders:(id)arg1 ;
-(void)_startSignalProvidersWithContext:(id)arg1 ;
-(void)_startDataSourcesWithContext:(id)arg1 ;
-(void)_stopDataSources;
-(void)_stopCurrentlyRunningSignalProviders;
-(void)_iterateSignalMask:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)registerSignalProviderDelegate:(id)arg1 forSignalTypes:(unsigned long long)arg2 ;
-(void)unregisterSignalProviderDelegate:(id)arg1 forSignalType:(unsigned long long)arg2 ;
-(id<NviAssetsProvider>)assetsProvider;
-(void)setAssetsProvider:(id<NviAssetsProvider>)arg1 ;
-(NSDictionary *)dataSrcMap;
-(void)setDataSrcMap:(NSDictionary *)arg1 ;
-(NSMapTable *)sigProvidersMap;
-(void)setSigProvidersMap:(NSMapTable *)arg1 ;
-(NSHashTable *)currActiveSigProvTypes;
-(void)setCurrActiveSigProvTypes:(NSHashTable *)arg1 ;
-(NSHashTable *)currActiveDataSourceTypes;
-(void)setCurrActiveDataSourceTypes:(NSHashTable *)arg1 ;
@end

