/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/AVAssetResourceLoaderDelegate.h>

@class NSData, NSString;

@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	ImageDecoderAVFObjC* _parent;
	long long _expectedContentSize;
	RetainPtr<NSData>* _data;
	BOOL _complete;
	Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16>* _requests;
	Lock _dataLock;

}

@property (readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithParent:(ImageDecoderAVFObjC*)arg1 ;
-(NSData *)data;
-(void)enqueueRequest:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
-(void)fulfillPendingRequests;
-(BOOL)canFulfillRequest:(id)arg1 ;
-(void)fulfillRequest:(id)arg1 ;
-(void)setExpectedContentSize:(long long)arg1 ;
-(void)updateData:(id)arg1 complete:(BOOL)arg2 ;
@end
