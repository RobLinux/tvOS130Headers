/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFCombineTextIntentHandling <NSObject>
@optional
-(void)confirmCombineText:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)handleCombineText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolveTextForCombineText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveSeparatorForCombineText:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveCustomSeparatorForCombineText:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end
