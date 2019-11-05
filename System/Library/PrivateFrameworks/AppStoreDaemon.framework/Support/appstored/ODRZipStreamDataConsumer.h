/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AssetDataConsumer.h>

@protocol SZExtractorDelegate;
@class SZExtractor, NSString;

@interface ODRZipStreamDataConsumer : NSObject <AssetDataConsumer> {

	BOOL _dataComplete;
	SZExtractor* _extractor;
	BOOL _hasConsumedData;
	unsigned long long _resumptionOffset;
	id<SZExtractorDelegate> _extractorDelegate;

}

@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate;              //@synthesize extractorDelegate=_extractorDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setExtractorDelegate:(id<SZExtractorDelegate>)arg1 ;
-(id<SZExtractorDelegate>)extractorDelegate;
-(void)prepareWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)diskUsage;
-(void)consumeData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)truncateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)suspendWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_prepareExtractor:(id)arg1 toPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithExtractor:(id)arg1 ;
@end

