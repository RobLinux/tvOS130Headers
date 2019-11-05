/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHAppContextValueTransformer.h>

@class NSString;

@interface TVHGroupsToJSGroupsValueTransformer : TVHAppContextValueTransformer {

	NSString* _unknownGroupTitle;

}

@property (nonatomic,copy) NSString * unknownGroupTitle;              //@synthesize unknownGroupTitle=_unknownGroupTitle - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 unknownGroupTitle:(id)arg2 ;
-(NSString *)unknownGroupTitle;
-(void)setUnknownGroupTitle:(NSString *)arg1 ;
@end
