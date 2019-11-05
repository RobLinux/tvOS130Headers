/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@class NSString;

@interface _UIStatusBarIdentifier : NSObject <NSCopying> {

	id _object;
	NSString* _string;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
@property (nonatomic,copy) id object;                                             //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * string;                                     //@synthesize string=_string - In the implementation block
+(id)identifierForObject:(id)arg1 string:(id)arg2 ;
+(id)displayIdentifierFromStringRepresentation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)string;
-(id)object;
-(void)setString:(NSString *)arg1 ;
-(void)setObject:(id)arg1 ;
-(NSString *)stringRepresentation;
@end

