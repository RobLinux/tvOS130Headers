/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/NSCoding.h>
#import <gamed/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface GKBulletinAction : NSObject <NSCoding, NSSecureCoding> {

	BOOL _isDestructive;
	BOOL _inAlertView;
	BOOL _inBannerView;
	long long _type;
	NSString* _title;
	NSString* _info;

}

@property (assign) long long type;                                 //@synthesize type=_type - In the implementation block
@property (retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (retain) NSString * info;                                //@synthesize info=_info - In the implementation block
@property (assign) BOOL isDestructive;                             //@synthesize isDestructive=_isDestructive - In the implementation block
@property (readonly) NSDictionary * actionDictionary; 
@property (assign) BOOL inAlertView;                               //@synthesize inAlertView=_inAlertView - In the implementation block
@property (assign) BOOL inBannerView;                              //@synthesize inBannerView=_inBannerView - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)info;
-(BOOL)isDestructive;
-(void)setInfo:(NSString *)arg1 ;
-(NSDictionary *)actionDictionary;
-(void)setIsDestructive:(BOOL)arg1 ;
-(void)setInAlertView:(BOOL)arg1 ;
-(BOOL)inAlertView;
-(BOOL)inBannerView;
-(void)setInBannerView:(BOOL)arg1 ;
@end
