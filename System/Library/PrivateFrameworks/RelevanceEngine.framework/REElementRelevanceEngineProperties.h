/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, REPredictorManager, RERelevanceProviderEnvironment;


@protocol REElementRelevanceEngineProperties <REExportedInterface>
@property (nonatomic,readonly) NSDictionary * sectionsMap; 
@property (nonatomic,readonly) REPredictorManager * predictorManager; 
@property (nonatomic,readonly) RERelevanceProviderEnvironment * providerEnvironment; 
@required
-(NSDictionary *)sectionsMap;
-(REPredictorManager *)predictorManager;
-(RERelevanceProviderEnvironment *)providerEnvironment;

@end

