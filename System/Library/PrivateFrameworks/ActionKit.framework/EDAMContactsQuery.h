/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMContactsQuery : FATObject {

	NSNumber* _maxEntries;
	NSString* _prefix;

}

@property (nonatomic,retain) NSNumber * maxEntries;              //@synthesize maxEntries=_maxEntries - In the implementation block
@property (nonatomic,retain) NSString * prefix;                  //@synthesize prefix=_prefix - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSNumber *)maxEntries;
-(void)setMaxEntries:(NSNumber *)arg1 ;
@end

