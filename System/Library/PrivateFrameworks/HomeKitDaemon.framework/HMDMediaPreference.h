/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFPreference.h>
#import <HomeKitDaemon/HMFObject.h>

@class HMFSystemPreference, HMFPreference, NSString, NSArray;

@interface HMDMediaPreference : HMFPreference <HMFObject> {

	HMFSystemPreference* _homeKitPreference;

}

@property (copy,readonly) HMFPreference * appleMediaPreference; 
@property (copy,readonly) HMFPreference * airPlay2Preference; 
@property (readonly) HMFSystemPreference * homeKitPreference;                     //@synthesize homeKitPreference=_homeKitPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(void)load;
-(BOOL)boolValue;
-(id)stringValue;
-(NSString *)propertyDescription;
-(id)numberValue;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(HMFSystemPreference *)homeKitPreference;
-(HMFPreference *)appleMediaPreference;
-(HMFPreference *)airPlay2Preference;
@end

