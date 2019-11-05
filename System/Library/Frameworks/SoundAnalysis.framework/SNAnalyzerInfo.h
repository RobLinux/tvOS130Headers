/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNAnalyzerProviding, SNResultsObserving, SNProcessing;
@class SNAnalyzerHost, NSError;

@interface SNAnalyzerInfo : NSObject {

	BOOL _configured;
	id<SNAnalyzerProviding> _request;
	id<SNResultsObserving> _resultsObserver;
	SNAnalyzerHost* _analyzerHost;
	id<SNProcessing> _sharedProcessor;
	NSError* _configurationError;

}

@property (nonatomic,retain) id<SNAnalyzerProviding> request;                            //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<SNResultsObserving> resultsObserver;              //@synthesize resultsObserver=_resultsObserver - In the implementation block
@property (nonatomic,retain) SNAnalyzerHost * analyzerHost;                              //@synthesize analyzerHost=_analyzerHost - In the implementation block
@property (nonatomic,retain) id<SNProcessing> sharedProcessor;                           //@synthesize sharedProcessor=_sharedProcessor - In the implementation block
@property (assign,nonatomic) BOOL configured;                                            //@synthesize configured=_configured - In the implementation block
@property (nonatomic,retain) NSError * configurationError;                               //@synthesize configurationError=_configurationError - In the implementation block
-(id<SNAnalyzerProviding>)request;
-(void)setRequest:(id<SNAnalyzerProviding>)arg1 ;
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
-(id<SNResultsObserving>)resultsObserver;
-(void)setResultsObserver:(id<SNResultsObserving>)arg1 ;
-(SNAnalyzerHost *)analyzerHost;
-(void)setAnalyzerHost:(SNAnalyzerHost *)arg1 ;
-(id<SNProcessing>)sharedProcessor;
-(void)setSharedProcessor:(id<SNProcessing>)arg1 ;
-(NSError *)configurationError;
-(void)setConfigurationError:(NSError *)arg1 ;
@end

