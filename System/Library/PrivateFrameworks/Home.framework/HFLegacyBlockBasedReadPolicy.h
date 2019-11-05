/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFCharacteristicReadPolicy.h>

@class NSString;

@interface HFLegacyBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy> {

	/*^block*/id _readValidator;

}

@property (nonatomic,copy,readonly) id readValidator;               //@synthesize readValidator=_readValidator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id*)arg2 ;
-(id)initWithReadValidator:(/*^block*/id)arg1 ;
-(id)readValidator;
@end

