/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding> {

	NSArray* _trains;
	NSNumber* _validityStartDate;
	NSNumber* _validityTerm;

}

@property (nonatomic,copy,readonly) NSArray * trains;                          //@synthesize trains=_trains - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityStartDate;              //@synthesize validityStartDate=_validityStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityTerm;                   //@synthesize validityTerm=_validityTerm - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)validityStartDate;
-(NSNumber *)validityTerm;
-(NSArray *)trains;
@end
