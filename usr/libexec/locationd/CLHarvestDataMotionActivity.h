/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/NSSecureCoding.h>

@interface CLHarvestDataMotionActivity : NSObject <NSSecureCoding> {

	CLMotionActivity _activity;

}

@property (assign,nonatomic) CLMotionActivity activity;              //@synthesize activity=_activity - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLMotionActivity)activity;
-(void)setActivity:(CLMotionActivity)arg1 ;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
@end

