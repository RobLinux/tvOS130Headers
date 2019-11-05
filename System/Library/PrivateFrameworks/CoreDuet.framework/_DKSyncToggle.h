/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface _DKSyncToggle : NSObject {

	BOOL _enabled;
	NSObject* _object;
	NSString* _name;
	SEL _enableSelector;
	SEL _disableSelector;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,__weak,readonly) NSObject * object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SEL enableSelector;                       //@synthesize enableSelector=_enableSelector - In the implementation block
@property (nonatomic,readonly) SEL disableSelector;                      //@synthesize disableSelector=_disableSelector - In the implementation block
+(id)toggleWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4 ;
-(NSString *)name;
-(void)dealloc;
-(NSObject *)object;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(SEL)enableSelector;
-(SEL)disableSelector;
@end

