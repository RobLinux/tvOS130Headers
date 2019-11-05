/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/NSCopying.h>

@protocol PHAWorkerJobDelegate;
@class PHPhotoLibrary;

@interface PHAWorkerJob : NSObject <NSCopying> {

	BOOL _didTimeout;
	BOOL _disableReactionCheck;
	BOOL _producedAssetMetadataChanges;
	BOOL _isGraphUpdateJob;
	BOOL _ignoreFurtherResults;
	BOOL _treatMissingResultsAsFailures;
	BOOL _isReactionJob;
	short _workerType;
	unsigned long long _scenario;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _countOfFailedStarts;
	id<PHAWorkerJobDelegate> _delegate;
	double _lastReportTimeAsInterval;

}

@property (assign,nonatomic) BOOL ignoreFurtherResults;                                //@synthesize ignoreFurtherResults=_ignoreFurtherResults - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                            //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long countOfFailedStarts;                   //@synthesize countOfFailedStarts=_countOfFailedStarts - In the implementation block
@property (assign,nonatomic,__weak) id<PHAWorkerJobDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign) double lastReportTimeAsInterval;                                    //@synthesize lastReportTimeAsInterval=_lastReportTimeAsInterval - In the implementation block
@property (readonly) double intervalSinceLastReport; 
@property (assign,nonatomic) BOOL treatMissingResultsAsFailures;                       //@synthesize treatMissingResultsAsFailures=_treatMissingResultsAsFailures - In the implementation block
@property (assign,setter=setIsReactionJob:,nonatomic) BOOL isReactionJob;              //@synthesize isReactionJob=_isReactionJob - In the implementation block
@property (nonatomic,readonly) unsigned long long scenario;                            //@synthesize scenario=_scenario - In the implementation block
@property (nonatomic,readonly) short workerType;                                       //@synthesize workerType=_workerType - In the implementation block
@property (assign,nonatomic) BOOL didTimeout;                                          //@synthesize didTimeout=_didTimeout - In the implementation block
@property (assign,nonatomic) BOOL disableReactionCheck;                                //@synthesize disableReactionCheck=_disableReactionCheck - In the implementation block
@property (assign) BOOL producedAssetMetadataChanges;                                  //@synthesize producedAssetMetadataChanges=_producedAssetMetadataChanges - In the implementation block
@property (assign) BOOL isGraphUpdateJob;                                              //@synthesize isGraphUpdateJob=_isGraphUpdateJob - In the implementation block
@property (nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) float completionScore; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id<PHAWorkerJobDelegate>)delegate;
-(void)setDelegate:(id<PHAWorkerJobDelegate>)arg1 ;
-(BOOL)finished;
-(void)finish;
-(void)prepare;
-(short)workerType;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)setDidTimeout:(BOOL)arg1 ;
-(BOOL)didTimeout;
-(float)completionScore;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3 ;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(id)statusAsDictionary;
-(BOOL)isEqualToWorkerJob:(id)arg1 ;
-(void)stopAcceptingResults;
-(void)extendTimeout;
-(double)intervalSinceLastReport;
-(unsigned long long)scenario;
-(BOOL)disableReactionCheck;
-(void)setDisableReactionCheck:(BOOL)arg1 ;
-(BOOL)producedAssetMetadataChanges;
-(void)setProducedAssetMetadataChanges:(BOOL)arg1 ;
-(BOOL)isGraphUpdateJob;
-(void)setIsGraphUpdateJob:(BOOL)arg1 ;
-(BOOL)ignoreFurtherResults;
-(void)setIgnoreFurtherResults:(BOOL)arg1 ;
-(unsigned long long)countOfFailedStarts;
-(void)setCountOfFailedStarts:(unsigned long long)arg1 ;
-(double)lastReportTimeAsInterval;
-(void)setLastReportTimeAsInterval:(double)arg1 ;
-(BOOL)treatMissingResultsAsFailures;
-(void)setTreatMissingResultsAsFailures:(BOOL)arg1 ;
-(BOOL)isReactionJob;
-(void)setIsReactionJob:(BOOL)arg1 ;
@end

