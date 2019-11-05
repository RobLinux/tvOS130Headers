/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <VideoSubscriberAccount/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface VSKeychainItemKind : NSObject <NSCopying> {

	NSString* _itemClassName;
	const CFStringRef _secItemClass;
	NSArray* _properties;

}

@property (nonatomic,copy) NSString * itemClassName;                              //@synthesize itemClassName=_itemClassName - In the implementation block
@property (assign,nonatomic) const CFStringRef secItemClass;                      //@synthesize secItemClass=_secItemClass - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributesByName; 
@property (nonatomic,copy) NSArray * properties;                                  //@synthesize properties=_properties - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)properties;
-(NSDictionary *)attributesByName;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setSecItemClass:(const CFStringRef)arg1 ;
-(void)setItemClassName:(NSString *)arg1 ;
-(NSString *)itemClassName;
-(const CFStringRef)secItemClass;
@end

