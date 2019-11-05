/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface _LSJournalledNotification : NSObject <NSSecureCoding> {

	int _notification;
	NSArray* _bundleIDs;
	NSDictionary* _options;
	BOOL _includePlugins;

}

@property (nonatomic,readonly) int notification;                    //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIDs;                 //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) BOOL includePlugins;                 //@synthesize includePlugins=_includePlugins - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)notification;
-(NSArray *)bundleIDs;
-(BOOL)includePlugins;
-(id)initWithNotification:(int)arg1 bundleIDs:(id)arg2 plugins:(BOOL)arg3 options:(id)arg4 ;
@end

