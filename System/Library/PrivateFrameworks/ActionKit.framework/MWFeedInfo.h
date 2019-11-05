/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/NSCoding.h>

@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding> {

	NSString* title;
	NSString* link;
	NSString* summary;
	NSURL* url;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSURL * url; 
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)summary;
-(NSString *)link;
-(void)setLink:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
@end

