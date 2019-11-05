/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXOpaqueDataPromise.h>
#import <InstallCoordination/SZExtractorDelegate.h>
#import <InstallCoordination/NSSecureCoding.h>
#import <InstallCoordination/SZExtractor.h>

@protocol SZExtractorDelegate;
@class SZExtractor, IXPromisedOutOfBandStreamingZipTransferSeed, NSURL, NSString;

@interface IXPromisedOutOfBandStreamingZipTransfer : IXOpaqueDataPromise <SZExtractorDelegate, NSSecureCoding, SZExtractor> {

	id<SZExtractorDelegate> _extractorDelegate;
	SZExtractor* _extractor;

}

@property (nonatomic,retain) IXPromisedOutOfBandStreamingZipTransferSeed * seed; 
@property (assign,getter=isComplete,nonatomic) BOOL complete; 
@property (assign,nonatomic) unsigned long long archiveBytesConsumed; 
@property (nonatomic,retain) SZExtractor * extractor;                                         //@synthesize extractor=_extractor - In the implementation block
@property (nonatomic,readonly) NSURL * extractionPath; 
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate;                //@synthesize extractorDelegate=_extractorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)doesConsumeExtractedData;
-(void)setExtractionProgress:(double)arg1 ;
-(void)extractionCompleteAtArchivePath:(id)arg1 ;
-(void)extractionEnteredPassThroughMode;
-(NSURL *)extractionPath;
-(void)prepareForExtraction:(/*^block*/id)arg1 ;
-(void)setExtractorDelegate:(id<SZExtractorDelegate>)arg1 ;
-(id<SZExtractorDelegate>)extractorDelegate;
-(BOOL)consumeExtractedDataIfNeeded;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(SZExtractor *)extractor;
-(void)setExtractor:(SZExtractor *)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(Class)seedClass;
-(unsigned long long)archiveBytesConsumed;
-(void)setArchiveBytesConsumed:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 streamingZipOptions:(id)arg3 archiveSize:(unsigned long long)arg4 diskSpaceNeeded:(unsigned long long)arg5 ;
-(void)addBytesTransferred:(unsigned long long)arg1 ;
@end

