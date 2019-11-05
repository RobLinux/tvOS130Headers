/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIRemoteTextEditingAttributeDescriptor : NSObject {

	NSString* _name;
	/*^block*/id _encoder;
	/*^block*/id _decoder;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)integerDescriptorWithName:(id)arg1 ;
+(id)boolDescriptorWithName:(id)arg1 ;
+(id)customDescriptorWithName:(id)arg1 encoder:(/*^block*/id)arg2 decoder:(/*^block*/id)arg3 ;
-(NSString *)name;
-(void)encodeWithTarget:(id)arg1 coder:(id)arg2 ;
-(void)decodeWithTarget:(id)arg1 coder:(id)arg2 ;
@end

