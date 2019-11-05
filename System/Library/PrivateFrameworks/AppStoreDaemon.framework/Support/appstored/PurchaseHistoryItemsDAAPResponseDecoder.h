/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DKDAAPParserDelegate.h>

@protocol OS_dispatch_queue;
@class ASDPurchaseHistoryApp, NSData, NSMutableArray, NSConditionLock, NSObject, NSNumber, NSString;

@interface PurchaseHistoryItemsDAAPResponseDecoder : NSObject <DKDAAPParserDelegate> {

	ASDPurchaseHistoryApp* _currentItem;
	BOOL _errorParsingItem;
	NSData* _data;
	NSMutableArray* _currentBatchAdded;
	NSMutableArray* _currentBatchRemoved;
	NSMutableArray* _currentRequiredCapabilities;
	unsigned _currentContainerCode;
	unsigned long long _batchSize;
	unsigned long long _currentBatchCount;
	NSConditionLock* _parsingLock;
	NSObject*<OS_dispatch_queue> _parsingQueue;
	BOOL _doneParsing;
	NSNumber* _isUpdate;
	NSNumber* _revision;
	NSNumber* _status;

}

@property (readonly) NSNumber * isUpdate;                           //@synthesize isUpdate=_isUpdate - In the implementation block
@property (readonly) NSNumber * revision;                           //@synthesize revision=_revision - In the implementation block
@property (readonly) NSNumber * status;                             //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)status;
-(NSNumber *)isUpdate;
-(NSNumber *)revision;
-(id)nextBatch;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 didFinishWithState:(long long)arg2 ;
-(void)parserDidCancel:(id)arg1 ;
-(void)parser:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCode:(unsigned)arg2 ;
-(BOOL)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned)arg2 ;
-(void)parser:(id)arg1 didStartContainerCode:(unsigned)arg2 contentLength:(unsigned)arg3 ;
-(void)parser:(id)arg1 didParseDataCode:(unsigned)arg2 bytes:(char*)arg3 contentLength:(unsigned)arg4 ;
-(void)parser:(id)arg1 didEndContainerCode:(unsigned)arg2 ;
-(void)_continueParsing;
-(id)initWithResponseData:(id)arg1 ;
-(void)parseMetadata;
-(void)_incrementBatchCount;
@end

