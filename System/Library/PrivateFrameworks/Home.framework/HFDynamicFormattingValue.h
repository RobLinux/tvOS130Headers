/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFDynamicFormattingValue <NSObject>
@property (nonatomic,readonly) id value; 
@property (nonatomic,readonly) id<HFStringGenerator> currentFormattedValue; 
@required
-(id)value;
-(id)observeFormattedValueChangesWithBlock:(/*^block*/id)arg1;
-(id<HFStringGenerator>)currentFormattedValue;

@end

