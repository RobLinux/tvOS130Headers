/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/NSCopying.h>
#import <SecurityFoundation/NSSecureCoding.h>

@class NSArray;

@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding> {

	id _keySearchFilterInternal;

}

@property (nonatomic,copy) NSArray * specifiers; 
@property (nonatomic,copy) NSArray * domains; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)domains;
-(void)setDomains:(NSArray *)arg1 ;
-(NSArray *)specifiers;
-(void)setSpecifiers:(NSArray *)arg1 ;
@end

