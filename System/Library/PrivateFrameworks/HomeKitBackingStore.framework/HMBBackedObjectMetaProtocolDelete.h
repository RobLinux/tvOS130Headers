/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMBBackedObjectMetaProtocolDelete : HMFObject {

	SEL _selector;

}

@property (assign,nonatomic) SEL selector;              //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(id)initWithSelector:(SEL)arg1 ;
-(id)sendDeletedTo:(id)arg1 deleted:(id)arg2 options:(id)arg3 ;
@end

