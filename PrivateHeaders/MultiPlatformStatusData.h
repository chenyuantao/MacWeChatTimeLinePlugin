//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MultiPlatformStatusData : NSObject <PBCoding>
{
    unsigned int syncCurDeviceNameTime;
    NSString *syncedCurDeviceName;
    NSString *mainDeviceName;
}

+ (id)dataFromFile:(id)arg1;
+ (void)initialize;
+ (void)_initPBTableOfMultiPlatformStatusData;
@property(retain, nonatomic) NSString *mainDeviceName; // @synthesize mainDeviceName;
@property(retain, nonatomic) NSString *syncedCurDeviceName; // @synthesize syncedCurDeviceName;
@property(nonatomic) unsigned int syncCurDeviceNameTime; // @synthesize syncCurDeviceNameTime;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)encodeDataToFile:(id)arg1;
- (id)init;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
