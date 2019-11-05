/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTSweetgumPlansInfo : NSObject <NSSecureCoding> {

	NSArray* _planGroups;
	NSString* _morePlansURL;

}

@property (nonatomic,retain) NSArray * planGroups;                 //@synthesize planGroups=_planGroups - In the implementation block
@property (nonatomic,retain) NSString * morePlansURL;              //@synthesize morePlansURL=_morePlansURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)planGroups;
-(NSString *)morePlansURL;
-(void)setPlanGroups:(NSArray *)arg1 ;
-(void)setMorePlansURL:(NSString *)arg1 ;
@end

