/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <KnowledgeMonitor/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NWNetworkOfInterestManager, NWNetworkOfInterest, _CDContextualKeyPath, NSMutableDictionary;

@interface _DKNetworkQualityMonitor : _DKMonitor <NWNetworkOfInterestManagerDelegate> {

	BOOL _initialized;
	BOOL _enabled;
	NSArray* _noiKeyPaths;
	NSObject*<OS_dispatch_queue> _noiManagerQueue;
	NWNetworkOfInterestManager* _noiManager;
	NWNetworkOfInterest* _noi;
	long long _previousQuality;
	long long _interfaceType;
	_CDContextualKeyPath* _qualityKeyPath;
	_CDContextualKeyPath* _predictedQualityKeyPath;
	_CDContextualKeyPath* _discretionaryInvitedKeyPath;
	_CDContextualKeyPath* _statusKeyPath;
	NSMutableDictionary* _statusDictionary;

}

@property (nonatomic,retain) NSArray * noiKeyPaths;                                           //@synthesize noiKeyPaths=_noiKeyPaths - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> noiManagerQueue;                    //@synthesize noiManagerQueue=_noiManagerQueue - In the implementation block
@property (nonatomic,retain) NWNetworkOfInterestManager * noiManager;                         //@synthesize noiManager=_noiManager - In the implementation block
@property (nonatomic,retain) NWNetworkOfInterest * noi;                                       //@synthesize noi=_noi - In the implementation block
@property (assign,nonatomic) long long previousQuality;                                       //@synthesize previousQuality=_previousQuality - In the implementation block
@property (assign,nonatomic) long long interfaceType;                                         //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * qualityKeyPath;                           //@synthesize qualityKeyPath=_qualityKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * predictedQualityKeyPath;                  //@synthesize predictedQualityKeyPath=_predictedQualityKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * discretionaryInvitedKeyPath;              //@synthesize discretionaryInvitedKeyPath=_discretionaryInvitedKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * statusKeyPath;                            //@synthesize statusKeyPath=_statusKeyPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * statusDictionary;                          //@synthesize statusDictionary=_statusDictionary - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                                //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                    //@synthesize enabled=_enabled - In the implementation block
+(id)entitlements;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)initialized;
-(void)start;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)deactivate;
-(void)setInterfaceType:(long long)arg1 ;
-(long long)interfaceType;
-(void)synchronouslyReflectCurrentValue;
-(void)didStopTrackingNOI:(id)arg1 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(NSMutableDictionary *)statusDictionary;
-(id)loadState;
-(void)saveState;
-(id)predictionTimelineFromNOIPredictions:(id)arg1 ;
-(void)updateInstantQuality;
-(void)updatePredictionAsync;
-(void)updateDiscretionaryTrafficInvited;
-(void)updatePowerCostDL;
-(void)updatePowerCostUL;
-(id)initForInterfaceType:(long long)arg1 connectionStatusKeyPath:(id)arg2 qualityKeyPath:(id)arg3 predictedQualityKeyPath:(id)arg4 discretionaryInvitedPath:(id)arg5 ;
-(NSArray *)noiKeyPaths;
-(void)setNoiKeyPaths:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)noiManagerQueue;
-(void)setNoiManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NWNetworkOfInterestManager *)noiManager;
-(void)setNoiManager:(NWNetworkOfInterestManager *)arg1 ;
-(NWNetworkOfInterest *)noi;
-(void)setNoi:(NWNetworkOfInterest *)arg1 ;
-(long long)previousQuality;
-(void)setPreviousQuality:(long long)arg1 ;
-(_CDContextualKeyPath *)qualityKeyPath;
-(void)setQualityKeyPath:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)predictedQualityKeyPath;
-(void)setPredictedQualityKeyPath:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)discretionaryInvitedKeyPath;
-(void)setDiscretionaryInvitedKeyPath:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)statusKeyPath;
-(void)setStatusKeyPath:(_CDContextualKeyPath *)arg1 ;
-(void)setStatusDictionary:(NSMutableDictionary *)arg1 ;
@end

